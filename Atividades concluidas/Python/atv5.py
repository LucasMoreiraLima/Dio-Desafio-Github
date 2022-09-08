valor = soma = negativo = 0
for i in range(20):
    valor = int(input('Digite o valor '))
    if valor >= 0:
        soma += valor
    else:
        negativo += 1  
print(f'Somas dos números positivos: {soma}')
print(f'Quantidade de números negativos: {negativo}')         