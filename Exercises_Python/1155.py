numeros = []

for c in range(1,101):
    numeros.append(1 / c)

print('{:.2f}'.format(sum(numeros)))