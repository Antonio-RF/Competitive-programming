valores = []
for c in range(10):
    numero = int(input())
    valores.append(numero)

for p,i in enumerate(valores):
    if i <= 0:
        print('X[{}] = 1'.format(p))
    else:
        print('X[{}] = {}'.format(p,i))