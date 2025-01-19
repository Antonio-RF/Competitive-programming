numero = float(input())
valores = []
media = 0
while len(valores) != 2:
    if (numero >= 0) and (numero <= 10):
        valores.append(numero)
        if len(valores) != 2:
            numero = float(input())
    else:
        print('nota invalida')
        numero = float(input())

print('media = {:.2f}'.format(sum(valores) / 2))