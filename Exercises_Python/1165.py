n = int(input())

resultado = str('EH')

for i in range(n):
    valor = int(input())
    resultado = 'EH'
    c = 2
    while c < valor:
        if valor % c == 0:
            print('{} nao eh primo'.format(valor))
            resultado = 'nEH'
            break
        c += 1
    
    if resultado == 'EH':
        print('{} eh primo'.format(valor))