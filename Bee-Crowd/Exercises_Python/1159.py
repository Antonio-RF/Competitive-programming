

numero = int(input())

while numero != 0:
    lista = []
    if numero % 2 == 0:
        for c in range(numero,numero+10,2):
            lista.append(c)
    else:
        for c in range(numero+1,numero+10,2):
            lista.append(c)
    
    print(sum(lista))

    numero = int(input())