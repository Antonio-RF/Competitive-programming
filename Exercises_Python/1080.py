numeros = []
c_anterior = 0
for c in range(1,101):
    numeros.append(int(input()))

maior = max(numeros)
posicao = numeros.index(maior)

print(maior)
print(posicao + 1)