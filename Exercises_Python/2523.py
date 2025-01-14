

while True:
    try:


        entrada = input()
        letra = list(entrada)

        qntd_de_letas = int(input())
        palavra = list(map(int, input().split()))

        resultado = []
        for p in palavra:
            resultado.append(letra[p - 1])

        print(''.join(resultado))

    except EOFError:
        break


