numeros = []
for count in range(0,5):
    numeros.append(int(input()))

pares = []
impar = []
for c in numeros:
    if c % 2 == 0:
        pares.append(c)
    else:
        impar.append(c)

positivo = []
negativo = []
for c in numeros:
    if c > 0:
        positivo.append(c)
    elif c < 0:
        negativo.append(c)

print(len(pares),'valor(es) par(es)')
print(len(impar),'valor(es) impar(es)')
print(len(positivo),'valor(es) positivo(s)')
print(len(negativo),'valor(es) negativo(s)')