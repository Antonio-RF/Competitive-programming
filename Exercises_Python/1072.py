nmr_casos = int(input())

numeros = []
for count in range(0,nmr_casos):
    numeros.append(int(input()))

dentro = []
fora = []
for c in numeros:
    if (c >= 10) and (c <= 20):
        dentro.append(c)
    else:
        fora.append(c)

print(len(dentro),'in')
print(len(fora),'out')