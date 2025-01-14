valor_compra = int(input())
parcelas = int(input())

if valor_compra % parcelas == 0:
    while valor_compra != 0:
        print(parcelas)
        valor_compra -= parcelas

else:
    while valor_compra != 0:
        parcelas_iniciais = valor_compra % parcelas
        for c in range(parcelas_iniciais):
            print(parcelas)
            valor_compra -= parcelas
        
        parcelas -= 1
        if valor_compra % parcelas == 0:
            while valor_compra != 0:
                print(parcelas)
                valor_compra -= parcelas


