quantidade = int(input())

numeros = []
for _ in range(quantidade):
    n = int(input())
    numeros.append(n)

numeros = False
resultado = 0
for c in range(len(numeros) - 1):
    if c < len(numeros) - 2:
        if numeros[c+1] != numeros[c+2]:
            numeros[c] = True
            resultado += 1

        if len(numeros) > 3:
            if numeros[-3]:
                


print(resultado)