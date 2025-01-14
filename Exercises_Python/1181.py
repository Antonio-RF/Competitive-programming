

linha_s = int(input())
operação = input()

matriz = []
for l in range(0,12):
    linha = []
    for c in range(0,12):
        linha.append(float(input()))
    matriz.append(linha)


soma_da_linha = sum(matriz[linha_s][i] for i in range(12))

if operação == 'S':
    print('{:.1f}'.format(soma_da_linha))
else:
    print('{:.1f}'.format(soma_da_linha / 12))