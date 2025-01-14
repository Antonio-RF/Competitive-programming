

numero = float(input())

numero2 = numero - 2000

if numero2 > 0:
    numero3 = numero2 - 1000
    if numero3 > 0:
        numero4 = numero3 - 1500
        if numero4 > 0:
            print('R$ {:.2f}'.format((1000 * 0.08) + (1500 * 0.18) + (numero4 * 0.28)))

        else:
            print('R$ {:.2f}'.format((1000 * 0.08) + (numero3 * 0.18)))
        
    else:
        print('R$ {:.2f}'.format((numero2 * 0.08)))

else:
    print('Isento')