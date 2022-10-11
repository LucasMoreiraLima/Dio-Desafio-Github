INSERT INTO usuario (codigo, nome, email, senha) values (3, 'Lucas Moreira', 'admsupremo@votacao.com', '$2a$10$X607ZPhQ4EgGNaYKt3n4SONjIv9zc.VMWdEuhCuba7oLAL5IvcL5.');
INSERT INTO usuario (codigo, nome, email, senha) values (4, 'Lucas Rebaixado', 'rebaixado@votacao.com', '$2a$10$Zc3w6HyuPOPXamaMhh.PQOXvDnEsadztbfi6/RyZWJDzimE8WQjaq');

-- admin
INSERT INTO usuario_permissao (codigo_usuario, codigo_permissao) values (3, 1);
INSERT INTO usuario_permissao (codigo_usuario, codigo_permissao) values (3, 2);
INSERT INTO usuario_permissao (codigo_usuario, codigo_permissao) values (3, 3);
INSERT INTO usuario_permissao (codigo_usuario, codigo_permissao) values (3, 4);

-- sub admin
INSERT INTO usuario_permissao (codigo_usuario, codigo_permissao) values (4, 1);
INSERT INTO usuario_permissao (codigo_usuario, codigo_permissao) values (4, 2);