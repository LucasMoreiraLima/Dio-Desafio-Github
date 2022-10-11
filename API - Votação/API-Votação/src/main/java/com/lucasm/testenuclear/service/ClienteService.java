package com.lucasm.testenuclear.service;

import org.springframework.beans.BeanUtils;
import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.dao.EmptyResultDataAccessException;
import org.springframework.http.ResponseEntity;
import org.springframework.stereotype.Service;

import com.lucasm.testenuclear.domain.model.Cliente;
import com.lucasm.testenuclear.repository.ClienteRepository;

@Service
public class ClienteService {
	
	@Autowired
	private ClienteRepository clienterepository;
	
	public ResponseEntity<Cliente> atualizar(Long id, Cliente cliente) {
		Cliente clientesalva = clienterepository.findById(id).orElse(null);
		if(clientesalva ==  null) {
			throw new EmptyResultDataAccessException(1);
		}
		BeanUtils.copyProperties(cliente, clientesalva, "id");
		clienterepository.save(clientesalva);
		return ResponseEntity.ok(clientesalva);
	}
}
