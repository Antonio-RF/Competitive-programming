quantidade = int(input())


for c in range(quantidade):
    numero = int(input())

    lista = [0,1]
    for k in range(1,numero+1):
        lista.append(lista[k] + lista[k-1])
    
    if numero == 0:
        print('Fib(0) = 0')
    elif numero == 1:
        print('Fib(1) = 1')
    else:
        print('Fib({}) = {}'.format(numero,lista[numero]))