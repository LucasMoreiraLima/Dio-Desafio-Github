class Cadastro:
    def __init__(self, nome, cpf, slr, md):
        self.nome = nome
        self.slr = slr
        self.md = md
        if len(cpf) == 11:
            self.cpf = cpf
        else:
            print("CPF inválido! digite o correto e descubrirá seu jogador do cruzeiro!")

    def salario_anual(self):
        self.slr
        return self.slr * 12

    def salario_bruto(self):
        self.slr;self.md
        return self.slr + self.md

    def salario_liquidoMensal(self):
        self.slr;self.md
        return self.salario_bruto() - (self.salario_bruto() * 0.08)

    def salario_liquidoAnual(self):
        self.md;self.slr
        return self.salario_liquidoMensal() * 12

    def mostraDadosFunc(self):
        return "Funcionario:", self.nome, "\nCPF:", self.cpf, "\nSalário:", self.slr, "\nMédia de vendas:", self.md

    def mostraCustoFunc(self):
        return "Salário anual:", self.salario_anual(), "\nSalário bruto:", self.salario_bruto(), "\nSalário liquido mensal:", self.salario_liquidoMensal(), "\nSalário liquido anual", self.salario_liquidoAnual()