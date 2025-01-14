while True:
    numero = float(input())
    valores = []
    media = 0
    while len(valores) != 2:
        if (numero >= 0) and (numero <= 10):
            valores.append(numero)
            if len(valores) != 2:
                numero = float(input())
        else:
            print('nota invalida')
            numero = float(input())

    print('media = {:.2f}'.format(sum(valores) / 2))

    print('novo calculo (1-sim 2-nao)')
    mensagem = int(input())
    while (mensagem != 1) and (mensagem!= 2):
        print('novo calculo (1-sim 2-nao)')
        mensagem = int(input())
    if mensagem == 2:
        break