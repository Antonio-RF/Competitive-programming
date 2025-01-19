

numero = int(input())

for c in range(0,numero):
    valor = int(input())
    prova = 2015 - valor
    if prova > 0:
        print('{} D.C.'.format(prova))
    else:
        print('{} A.C.'.format(abs(prova)+1))

