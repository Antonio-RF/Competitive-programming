

while True:
    try:
        quantidade, identificador = map(int, input().split())

        count = 0

        for _ in range(0,quantidade):
            jogador,numero = map(int, input().split())
            if (jogador == identificador) and (numero == 0):
                count += 1
            
        print(count)

    except EOFError:
        break


                    