

coluna = int(input())
operação = input()

matriz = []
for l in range(0,12):
    linha = []
    for c in range(0,12):
        linha.append(float(input()))
    matriz.append(linha)


soma_da_coluna = sum(matriz[i][coluna] for i in range(12))

if operação == 'S':
    print('{:.1f}'.format(soma_da_coluna))
else:
    print('{:.1f}'.format(soma_da_coluna / 12))