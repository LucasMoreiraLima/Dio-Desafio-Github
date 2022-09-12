import random
c=co=0
while c == 0:
    print('---' * 10)
    print('Bem-Vindo ao jogo do Adivinha!')
    print('---' * 10)
    cfg = int(input('1 - Começar o Jogo\n2 - Configurações Visuais\n:'))
    if cfg == 1:
        print('---' * 10)
        print('Escolha a Dificuldade:')
        print('---' * 10)
        c = int(input(('1 - Fácil\n2 - Médio\n3 - Difícil\nDigite qualquer outro número para sair\n:')))
        print('---' * 10)
    if c == 1 or c == 2 or c == 3:
        break
    if cfg == 2:
        print('---' * 10)
        print('Configurações Visuais!')
        print('---' * 10)
        con =  int(input('1 - Corzinha Vermelha\n2 - Corzinha Azul\n3 - Corzinha Amarela\n4 - Reset de cor\n:'))
        print('---' * 10)
        #Cor
        if con == 1:
            print('\033[1;31mAlterado para Vermelho!')
            print('---' * 10)
        if con == 2:
            print('\033[1;34mAlterado para Azul')
            print('---' * 10)
        if con == 3:
            print('\033[1;33mAlterado para Amarelo')
            print('---' * 10)
        if con == 4:
            print('\033[0;0mResetado para a cor Padrão')
            print('---' * 10)

#Fácil
Nstr1 = random.randint(1, 15)
while c == 1:
    nmr = int(input('Digite um número de 1 a 15\n:'))
    print('---' * 12)
    co += 1
    if co == 1 and nmr != Nstr1:
        print('Perdeu Uma(1) Vida te restam Quatro(4)')
        print('---' * 12)
    if co == 2 and nmr != Nstr1:
        print('Perdeu Uma(1) Vida te restam Três(3)')
        print('---' * 12)
    if co == 3 and nmr != Nstr1:
        print('Perdeu Uma(1) Vida te restam Duas(2)')
        print('---' * 12)
    if co == 4 and nmr != Nstr1:
        print('Perdeu Uma(1) Vida te resta Uma(1)')
        print('---' * 12)
    if nmr > Nstr1 and nmr != Nstr1:
        print('Número maior que o sorteado')
        print('---' * 12)
    if nmr < Nstr1 and nmr != Nstr1:
        print('Número menor que o sorteado')
        print('---' * 12)
    if nmr == Nstr1:
        print('\033[1;31mParabéns! Acertou o número\033[0;0m')
        print('---' * 12)
        break
    if co == 5:
        print('\033[1;31mFim de Jogo!\033[0;0m')
        print('O número sorteado era:',Nstr1)
        print('---' * 12)
        break

#Médio
Nstr2 = random.randint(1, 50)
while c == 2:
    nmr = int(input('Digite um número de 1 a 50\n:'))
    print('---' * 12)
    co += 1
    if co == 1 and nmr != Nstr2:
        print('Perdeu Uma(1) Vida te restam Quatro(4)')
        print('---' * 12)
    if co == 2 and nmr != Nstr2:
        print('Perdeu Uma(1) Vida te restam Três(3)')
        print('---' * 12)
    if co == 3 and nmr != Nstr2:
        print('Perdeu Uma(1) Vida te restam Duas(2)')
        print('---' * 12)
    if co == 4 and nmr != Nstr2:
        print('Perdeu Uma(1) Vida te resta Uma(1)')
        print('---' * 12)
    if nmr > Nstr2 and nmr != Nstr2:
        print('Número maior que o sorteado')
        print('---' * 12)
    if nmr < Nstr2 and nmr != Nstr2:
        print('Número menor que o sorteado')
        print('---' * 12)
    if nmr == Nstr2:
        print('\033[1;31mParabéns! Acertou o número\033[0;0m')
        print('---' * 12)
        break
    if co == 5:
        print('\033[1;31mFim de Jogo!\033[0;0m')
        print('O número sorteado era:',Nstr2)
        print('---' * 12)
        break

#Difícil
Nstr3 = random.randint(1, 100)
while c == 3:
    nmr = int(input('Digite um número de 1 a 100\n:'))
    print('---' * 12)
    co += 1
    if co == 1 and nmr != Nstr3:
        print('Perdeu Uma(1) Vida te restam Quatro(4)')
        print('---' * 12)
    if co == 2 and nmr != Nstr3:
        print('Perdeu Uma(1) Vida te restam Três(3)')
        print('---' * 12)
    if co == 3 and nmr != Nstr3:
        print('Perdeu Uma(1) Vida te restam Duas(2)')
        print('---' * 12)
    if co == 4 and nmr != Nstr3:
        print('Perdeu Uma(1) Vida te resta Uma(1)')
        print('---' * 12)
    if nmr > Nstr3 and nmr != Nstr3:
        print('Número maior que o sorteado')
        print('---' * 12)
    if nmr < Nstr3 and nmr != Nstr3:
        print('Número menor que o sorteado')
        print('---' * 12)
    if nmr == Nstr3:
        print('\033[1;31mParabéns! Acertou o número\033[0;0m')
        print('---' * 12)
        break
    if co == 5:
        print('\033[1;31mFim de Jogo!\033[0;0m')
        print('O número sorteado era:',Nstr3)
        print('---' * 12)
        break