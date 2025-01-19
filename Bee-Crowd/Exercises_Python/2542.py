


while True:
     try:
        atributos = int(input())

        quantidade_marcos,quantidade_leo = map(int, input().split())


        matriz1 = []
        for l in range(0,quantidade_marcos):
            linha1 = list(map(int, input().split()))
            matriz1.append(linha1)

        matriz2 = []
        for l in range(0,quantidade_leo):
            linha2 = list(map(int, input().split()))
            matriz2.append(linha2)

        escolha_m,escolha_l = map(int, input().split())

        escolha_atributo = int(input())

        resultado_marcos = 0
        for p,linha1 in enumerate(matriz1):
                if (p+1) == escolha_m:
                    resultado_marcos = linha1[escolha_atributo - 1]

        resultado_leo = 0
        for t,linha2 in enumerate(matriz2):
                if (t+1) == escolha_l:
                    resultado_leo = linha2[escolha_atributo - 1]
                    break

        if resultado_marcos > resultado_leo:
            print('Marcos')
        elif resultado_leo > resultado_marcos:
            print('Leonardo')
        else:
            print('Empate')
    
   
     except EOFError:
        break

