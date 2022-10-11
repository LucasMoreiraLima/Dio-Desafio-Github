package com.lucasm.testenuclear;

import org.springframework.boot.SpringApplication;
import org.springframework.boot.autoconfigure.SpringBootApplication;
import org.springframework.boot.autoconfigure.domain.EntityScan;
import org.springframework.boot.context.properties.EnableConfigurationProperties;
import org.springframework.data.jpa.repository.config.EnableJpaRepositories;

import com.lucasm.testenuclear.config.property.TesteNuclearAPIProperty;

@SpringBootApplication
@EnableConfigurationProperties(TesteNuclearAPIProperty.class)
@EntityScan(basePackages = {
            "com.lucasm.testenuclear.domain.model"
            })
@EnableJpaRepositories(basePackages = {
            "com.lucasm.testenuclear.repository"
            })
public class TesteSpringProjectApplication {

	public static void main(String[] args) {
		SpringApplication.run(TesteSpringProjectApplication.class, args);
	}

}
