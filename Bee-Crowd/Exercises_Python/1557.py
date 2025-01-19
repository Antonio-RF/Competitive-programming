

x = int(input())
while x != 0:

    matriz=[]
    for l in range(0,x):
        linha = []
        for c in range(0,x):
            linha.append(int(input()))
        matriz.append(linha)

    for l in range(0,x):
        for c in range(0,x):
            print(f'{matriz[l][c]}',end=' ')
        print()

    x = int(input())