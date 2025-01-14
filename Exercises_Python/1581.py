numero = int(input())

for _ in range(numero):
    n = int(input())
    lista_das_nacionalidades = []
    for _ in range(n):
        nacionalidade = input()
        lista_das_nacionalidades.append(nacionalidade)

        ingles = False
        k = lista_das_nacionalidades[0]
        for t in lista_das_nacionalidades:
            if t != k:
                ingles = True
                break

    if ingles:
        print('ingles')
    else:
        print(k)

