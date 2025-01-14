


while True:
    try:

        numero = int(input())

        matriz = [[0]*numero for _ in range(numero)]
        ponto_central = numero // 2

        for l in range(numero):
            for c in range(numero):
                if numero // 3 <= l < (2 * numero // 3) + 1 and numero // 3 <= c < (2 * numero // 3) + 1:
                    matriz[l][c] = 1
                elif l == c:
                    matriz[l][c] = 2
                elif l + c == numero - 1:
                    matriz[l][c] = 3

        matriz[ponto_central][ponto_central] = 4

        for l in matriz:
            resultado = ''.join(map(str, l))
            print(resultado)

    except EOFError:
        break
