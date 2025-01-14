

numero = int(input())

for _ in range(numero):
    info = input().split()
    nome1 = info[0]
    nome2 = info[2]
    numero1,numero2 = map(int, input().split())
    soma = numero1 + numero2
    
    if info[1] == 'PAR':
        if soma % 2 == 0:
            print(nome1)
        else:
            print(nome2)

    else:
        if soma % 2 == 0:
            print(nome2)
        else:
            print(nome1)

    
