package com.lucasm.testenuclear.repository;

import org.springframework.data.jpa.repository.JpaRepository;
import com.lucasm.testenuclear.domain.model.Cliente;

public interface ClienteRepository extends JpaRepository<Cliente, Long>{

}
