valores = []
for count in range(0,5):
    valores.append(int(input()))

pares = []
for c in valores:
    if c % 2 == 0:
        pares.append(c)

print(len(pares),'valores pares')