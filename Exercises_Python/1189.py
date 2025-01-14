

operacao = input()

matriz = []
for l in range(12):
    linha = []
    for c in range(12):
        linha.append(float(input()))
    matriz.append(linha)

soma = 0
for i in range(5):
    for j in range(i+1, 11-i):
        soma += matriz[j][i]

if operacao == 'S':
    print('{:.1f}'.format(soma))
else:
    media = soma / 30
    print('{:.1f}'.format(media))