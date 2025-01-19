numeros = list()
for count in range(0,6):
    numeros.append(float(input()))


lista2 = []
for count in numeros:
    if count > 0:
        lista2.append(count)

print(len(lista2), 'valores positivos')