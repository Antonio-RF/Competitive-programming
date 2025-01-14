primeiro = int(input())
segundo = int(input())

numeros = [primeiro, segundo]

maior = max(numeros)
menor = min(numeros)


soma = 0
if (menor+1) % 2 == 0:
    for c in range(menor+2,maior,2):
        soma = soma + c

else:
    for c in range(menor+1,maior,2):
        soma = soma + c

print(soma)