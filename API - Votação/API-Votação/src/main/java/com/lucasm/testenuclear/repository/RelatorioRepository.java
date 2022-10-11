package com.lucasm.testenuclear.repository;

import java.util.List;

import org.springframework.data.jpa.repository.JpaRepository;
import org.springframework.data.jpa.repository.Query;

import com.lucasm.testenuclear.domain.model.Relatorio;

public interface RelatorioRepository extends JpaRepository<Relatorio, String>{
	@Query(value = "SELECT sala, count(sala) votos FROM cliente group by sala", nativeQuery = true)
    List<Relatorio> relatorio();
}
