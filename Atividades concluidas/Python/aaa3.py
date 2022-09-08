c = d = voto = tot = 0
while True:
    print('Sistema','de','Votação', sep='-')
    voto = int(input('Digite: \n1 - Senhora sua mãe \n2 - Hitler baiano'))
    if voto == 1:
        c += 1
    if voto == 2:
        d += 1
    if voto != 1 and voto != 2:
        break
    tot = c+d
    
if c > d:
        print('Vencedora foi: A senhora sua mãe!')
        print(f'O total de votos foi: {tot}, total de votos para candidato 1: {c} e 2: {d}')
if d > c:
        print('Vencedor foi Hitler baiano!')
        print(f'O total de votos foi: {tot}, total de votos para candidato 1: {c} e 2: {d}')