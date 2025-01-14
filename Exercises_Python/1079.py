numeros = int(input())

lista = []
for count in range(0,numeros):
    valores = list(map(float, input().split()))
    media = (((valores[0] * 2) + (valores[1] * 3) + (valores[2] * 5)) / 10)
    print('{:.1f}'.format(media))