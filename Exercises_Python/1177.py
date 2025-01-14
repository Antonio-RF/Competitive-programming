

valor = int(input())
numero2 = valor * valor

for c in range(numero2+1):
    print('N[{}] = {}'.format(c, c % valor))
