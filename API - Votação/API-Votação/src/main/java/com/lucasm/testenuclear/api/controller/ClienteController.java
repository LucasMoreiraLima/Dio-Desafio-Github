package com.lucasm.testenuclear.api.controller;


import java.net.URI;
import java.util.List;
import java.util.Optional;

import javax.servlet.http.HttpServletResponse;
import javax.validation.Valid;

import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.http.HttpStatus;
import org.springframework.http.ResponseEntity;
import org.springframework.security.access.prepost.PreAuthorize;
import org.springframework.web.bind.annotation.DeleteMapping;
import org.springframework.web.bind.annotation.GetMapping;
import org.springframework.web.bind.annotation.PathVariable;
import org.springframework.web.bind.annotation.PostMapping;
import org.springframework.web.bind.annotation.PutMapping;
import org.springframework.web.bind.annotation.RequestBody;
import org.springframework.web.bind.annotation.RequestMapping;
import org.springframework.web.bind.annotation.ResponseStatus;
import org.springframework.web.bind.annotation.RestController;
import org.springframework.web.servlet.support.ServletUriComponentsBuilder;

import com.lucasm.testenuclear.domain.model.Cliente;
import com.lucasm.testenuclear.domain.model.Relatorio;
import com.lucasm.testenuclear.repository.ClienteRepository;
import com.lucasm.testenuclear.repository.RelatorioRepository;
import com.lucasm.testenuclear.service.ClienteService;

@RestController
@RequestMapping("/cliente")
public class ClienteController {
	
	@Autowired
	private ClienteRepository clienterepository;
	
	@Autowired
	private RelatorioRepository relatoriorepository;
	
	@Autowired
	private ClienteService clienteservice;
		
	@GetMapping
	//@PreAuthorize("hasAuthority('ROLE_PESQUISAR_CLIENTE')")
	public List<Cliente> listar() {
		return clienterepository.findAll();
	}
	
	@GetMapping("/relatorio")
	public List<Relatorio> listarSalaseVotos() {
		return relatoriorepository.relatorio();
	}
	
	@PostMapping
	@ResponseStatus(HttpStatus.CREATED)
	public ResponseEntity<Cliente> criar(@Valid @RequestBody Cliente cliente, HttpServletResponse response) {
		Cliente clientesalva = clienterepository.save(cliente);
		
		URI uri = ServletUriComponentsBuilder.fromCurrentRequestUri().path("/{id}").buildAndExpand(clientesalva.getId()).toUri();
		response.setHeader("Location", uri.toASCIIString());
		
		return ResponseEntity.created(uri).body(clientesalva);
	}
	
	@GetMapping("/{id}")
	@PreAuthorize("hasAuthority('ROLE_PESQUISAR_CLIENTE')")
	public ResponseEntity<Cliente> buscarPeloid(@PathVariable Long id) {
		Optional<Cliente> cliente = clienterepository.findById(id);
		return cliente != null ? ResponseEntity.of(cliente) : ResponseEntity.notFound().build();
	}
	
	@DeleteMapping("/{id}")
	@ResponseStatus(HttpStatus.NO_CONTENT)
	@PreAuthorize("hasAuthority('ROLE_DELETAR_CLIENTE')")
	public void remover(@PathVariable Long id) {
		clienterepository.deleteById(id);
	}
	
	@PutMapping("/{id}")
	@PreAuthorize("hasAuthority('ROLE_ALTERAR_CLIENTE')")
	public ResponseEntity<ResponseEntity<Cliente>> atualizar(@PathVariable Long id, @Valid @RequestBody Cliente cliente) {
		ResponseEntity<Cliente> clientesalva =  clienteservice.atualizar(id, cliente);
		return ResponseEntity.ok(clientesalva);
	}
	
}
/*@PersistenceContext
private EntityManager manager;


@GetMapping("/clientes")
public List<Cliente> listar() {
	return manager.createQuery("from Cliente", Cliente.class)
	.getResultList();
	*/
