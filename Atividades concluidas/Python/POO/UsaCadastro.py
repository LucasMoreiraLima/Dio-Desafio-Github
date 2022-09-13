from Cadastro import Cadastro
from tkinter import messagebox
pessoa = Cadastro(str(input("Nome do funcionário:")), str(input("CPF:")), float(input("Salário:")), float(input("Média:")))
messagebox.showinfo("Cadastro", pessoa.mostraDadosFunc())
messagebox.showinfo("Cadastro", pessoa.mostraCustoFunc())
