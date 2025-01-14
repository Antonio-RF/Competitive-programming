

operacao = input()

matriz = []
for l in range(12):
    linha = []
    for c in range(12):
        linha.append(float(input()))
    matriz.append(linha)

soma = 0
for i in range(12):
    for j in range(12):
        if j > i:
            soma += matriz[i][j]
    
if operacao == 'S':
    print('{:.1f}'.format(soma))
else:
    media = soma / 66
    print('{:.1f}'.format(media))