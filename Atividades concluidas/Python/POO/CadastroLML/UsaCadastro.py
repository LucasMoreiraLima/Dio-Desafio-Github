from Cadastro import Cadastro
from tkinter import messagebox, simpledialog
import vlc
                    #Altere para o seu diretório atual
m = vlc.MediaPlayer('C:/Users/Lucas Moreira/Downloads/CadastroLML/musiquinha.mp3')
m.play()
pessoa = Cadastro(simpledialog.askstring('Cadastro Nome', '\t\tDigite o Nome:\t\t\t'), 
                  simpledialog.askstring('Cadastro CPF', '\t\tDigite o CPF:\t\t\t'), 
                  simpledialog.askfloat('Cadastro Salário', '\t\tDigite o Salário:\t\t\t'), 
                  simpledialog.askfloat('Cadastro Média', '\t\tDigite a Média de vendas:\t\t\t'))
messagebox.showinfo("Cadastro", pessoa.mostraDadosFunc())
messagebox.showinfo("Cadastro", pessoa.mostraCustoFunc())
m.stop()
