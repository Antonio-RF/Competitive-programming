a, b = input().split()
a = int(a)
b = int(b)

lista = [1,2,3,4,5]

if a == lista[0]:
    print('Total: R$ {:.2f}'.format(4 * b))

if a == lista[1]:
    print('Total: R$ {:.2f}'.format(4.5 * b))

if a == lista[2]:
    print('Total: R$ {:.2f}'.format(5 * b))

if a == lista[3]:
    print('Total: R$ {:.2f}'.format(2 * b))

if a == lista[4]:
    print('Total: R$ {:.2f}'.format(1.5 * b))