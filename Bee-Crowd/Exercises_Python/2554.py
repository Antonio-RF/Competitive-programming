

while True:
    try:


        n,d = map(int, input().split())

        resultado = []

        for k in range(0,d):
            entrada = input().split(maxsplit=1)
            data = str(entrada[0])
            lista_da_aceitacao = []
            aceitacao = entrada[1].strip().split()
            lista_da_aceitacao.extend(aceitacao)

            lista_final = [c for c in lista_da_aceitacao if c == '1']


            if len(lista_da_aceitacao) == len(lista_final):
                if len(resultado) == 0:
                    resultado.append(data)
                    print(resultado[0])
            
            if (k == (d-1)) and (len(resultado) == 0):
                print('Pizza antes de FdI')

    

    except EOFError:
        break







