valores = []
for count in range(0,6):
    valores.append(float(input()))

positivos = []
for c in valores:
    if c > 0:
        positivos.append(c)
media = sum(positivos) / len(positivos)

print(len(positivos),'valores positivos')
print('{:.1f}'.format(media))