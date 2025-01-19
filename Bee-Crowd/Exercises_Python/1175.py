

numeros = []
for i in range(0,20):
    numero = int(input())
    numeros.append(numero)

numeros.sort(reverse=True)


for z in range(len(numeros)):
    print('N[{}] = {}'.format(z, numeros[z]))

