numero = float(input())
k = numero

for c in range(0,100):
    print('N[{}] = {:.4f}'.format(c,k))
    k = numero / 2
    numero = k