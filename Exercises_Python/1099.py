linhas = int(input())

for count in range(0,linhas):
    valores = list(map(int, input().split()))
    maior = max(valores)
    menor = min(valores)
    if maior - menor <= 1:
        print('0')
    elif (maior - menor == 2) and (maior % 2 != 0) and (menor % 2 != 0):
        print('0')
    elif menor % 2 == 0:
        acumulador = []
        for c in range(menor+1,maior,2):
            acumulador.append(c)
        print(sum(acumulador))
    else:
        acumulador2 = []
        for c in range(menor+2,maior,2):
            acumulador2.append(c)
        print(sum(acumulador2))