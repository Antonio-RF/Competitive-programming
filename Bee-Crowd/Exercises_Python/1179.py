pares = []
impares = []
for p in range(15):
    numero = int(input())

    if numero % 2 == 0:
        pares.append(numero)
    else:
        impares.append(numero)

    if len(pares) == 5:
        k = 0
        for c in pares:
            print('par[{}] = {}'.format(k,c))
            k += 1
        pares = []

    if len(impares) == 5:
        i = 0
        for t in impares:
            print('impar[{}] = {}'.format(i,t))
            i += 1
        impares = []

s = 0
for r in impares:
    print('impar[{}] = {}'.format(s,r))
    s += 1

u = 0
for o in pares:
    print('par[{}] = {}'.format(u,o))
    u += 1