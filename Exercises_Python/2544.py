import math

while True:

    try:
        numero = int(input())
        resultado = math.log(numero, 2)
        resultado = int(resultado)
        print(resultado)
    
    except EOFError:
        break


