from random import randint
c=alc=0
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
            continue
        if con == 2:
            print('\033[1;34mAlterado para Azul')
            print('---' * 10)
            continue
        if con == 3:
            print('\033[1;33mAlterado para Amarelo')
            print('---' * 10)
            continue
        if con == 4:
            print('\033[0;0mResetado para a cor Padrão')
            print('---' * 10)
            continue
if c == 1:
    alc = 5
    lu = 'Digite um número de 1 a 15\n:'
    Nstr1 = randint(1, 15)
if c == 2:
    alc = 4
    lu = 'Digite um número de 1 a 50\n:'
    Nstr1 = randint(1, 50)
if c == 3:
    alc = 3
    lu = 'Digite um número de 1 a 100\n:'
    Nstr1 = randint(1, 100)
for i in range(1, alc+1):
    nmr = int(input(lu))
    print('---' * 12)
    print(f'Te resta {i} vidas de {alc}')
    if nmr > Nstr1 and nmr != Nstr1:
        print('Número maior que o sorteado')
        print('---' * 12)
        continue
    if nmr < Nstr1 and nmr != Nstr1:
        print('Número menor que o sorteado')
        print('---' * 12)
        continue
    if nmr == Nstr1:
        print('\033[1;31mParabéns! Acertou o número\033[0;0m')
        print('---' * 12)
        break
if nmr != Nstr1:
    print('\033[1;31mFim de Jogo!\033[0;0m')
    print('O número sorteado era:',Nstr1)
    print('---' * 12)