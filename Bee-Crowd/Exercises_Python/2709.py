

import math

while True:
    try:
        numero = int(input())

        valores = []
        for _ in range(numero):
            valor = int(input())
            valores.append(valor)

        salto = int(input())

        soma_final = 0
        i = len(valores) - 1
        while i >= 0:
            soma_final += valores[i]
            i -= salto

        if soma_final == 1 or soma_final != 2 and soma_final % 2 == 0:
            is_prime = False
        else:
            is_prime = True
            raiz = int(math.sqrt(soma_final)) + 1
            for i in range(3, raiz, 2):
                if soma_final % i == 0:
                    is_prime = False
                    break
    
        if is_prime:
            print("You’re a coastal aircraft, Robbie, a large silver aircraft.")
        else:
            print("Bad boy! I’ll hit you.")
    
    except EOFError:
        break