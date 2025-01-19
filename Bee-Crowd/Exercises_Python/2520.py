

while True:
    try:


        x,y = map(int, input().split())


        matriz = []
        for l in range(0,x):
            linha = list(map(int, input().split()))
            matriz.append(linha)

        for p, linha in enumerate(matriz):
            for c, valor in enumerate(linha):
                if valor == 1:
                    inicio_linha = p + 1
                    inicio_coluna = c + 1
                    break

        for p, linha in enumerate(matriz):
            for c, valor in enumerate(linha):
                if valor == 2:
                    final_linha = p + 1
                    final_coluna = c + 1
                    break

        resultado1 = abs(inicio_linha - final_linha)
        resultado2 = abs(inicio_coluna - final_coluna)

        print(resultado1 + resultado2)

    except EOFError:
        break
