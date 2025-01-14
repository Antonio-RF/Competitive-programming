while True:
    try:
        numero = int(input())

        lista_composta = []
        for c in range(0,numero):
            string = list(input())
            lista_composta.append(string)

        lista_perdedores = []
        for i in range(0,numero):
            nome,posicao,operacao = map(str, input().split())
            posicao = int(posicao)

        if len(lista_composta) == 5:
            if operacao == "+":
                if int(lista_composta[posicao-1][0]) + int(lista_composta[posicao-1][2]) != int(lista_composta[posicao-1][4]):
                    lista_perdedores.append(nome)

            elif operacao == "-":
                if int(lista_composta[posicao-1][0]) - int(lista_composta[posicao-1][2]) != int(lista_composta[posicao-1][4]):
                    lista_perdedores.append(nome)

            elif operacao == "*":
                if int(lista_composta[posicao-1][0]) * int(lista_composta[posicao-1][2]) != int(lista_composta[posicao-1][4]):
                    lista_perdedores.append(nome)
        else:
            if operacao == "+":
                if int(lista_composta[posicao-1][0]) + int(lista_composta[posicao-1][2]) != -int(lista_composta[posicao-1][5]):
                    lista_perdedores.append(nome)

            elif operacao == "-":
                if int(lista_composta[posicao-1][0]) - int(lista_composta[posicao-1][2]) != -int(lista_composta[posicao-1][5]):
                    lista_perdedores.append(nome)

            elif operacao == "*":
                if int(lista_composta[posicao-1][0]) * int(lista_composta[posicao-1][2]) != -int(lista_composta[posicao-1][5]):
                    lista_perdedores.append(nome)

        if len(lista_perdedores) == numero:
            print("You Shall All Pass!")
        elif len(lista_perdedores) == 0:
            print("None Shall Pass!")
        else:
            lista_perdedores.sort()
            print(" ".join(lista_perdedores))

    except EOFError:
        break