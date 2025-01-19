

x, y = map(int, input().split())

matriz = []
counter = 1
for l in range(x):
    linha = []
    for c in range(x):
        if counter <= y:
            linha.append(counter)
            counter += 1
        else:
            break
    matriz.append(linha)
    if counter > y:
        break

print(matriz)

