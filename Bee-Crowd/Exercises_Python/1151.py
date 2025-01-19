numero = int(input())

lista = [0,1]
for k in range(1,numero+1):
    lista.append(lista[k] + lista[k-1])

if numero == 1:
    print(0)
elif numero == 2:
    print('0 1')
else:
    lista.pop()
    lista.pop()
    print(' '.join(map(str, lista)))