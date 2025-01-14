primeiro = int(input())
segundo = int(input())

numeros = [primeiro, segundo]

maior = max(numeros)
menor = min(numeros)

for c in range(menor+1,maior):
    if (c % 5 == 2) or (c % 5 == 3):
        print(c)