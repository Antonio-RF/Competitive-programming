n = int(input())

numeros = []

while n >= 0:
    numeros.append(n)
    n = int(input())

media = (sum(numeros) / len(numeros))

print('{:.2f}'.format(media))