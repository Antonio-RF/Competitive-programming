


while True:
    try:

        horario_inicial = input().split(':')
        lista = list(horario_inicial)

        if int(lista[0]) > 8:
            conta = abs(28800 - ((int(lista[0]) * 3600) + (int(lista[1]) * 60)))
            conta2 = (conta // 60) + 60
            print('Atraso maximo: {}'.format(conta2))
        elif int(lista[0]) == 7:
            conta = int(lista[1])
            print('Atraso maximo: {}'.format(conta))
        elif int(lista[0]) == 8:
            conta = int(lista[1]) + 60
            print('Atraso maximo: {}'.format(conta))
        else:
            print('Atraso maximo: 0')

    except EOFError:
        break