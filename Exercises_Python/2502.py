


while True:
    try:
        c, n = map(int, input().split())

        cifra1 = input()
        cifra2 = input()

        for _ in range(n):
            frase = input()

            frase_resultante = []
            for c in frase:
                substituido = False
                for p in range(len(cifra1)):
                    if c.lower() == cifra1[p].lower():
                        if c.isupper():
                            frase_resultante.append(cifra2[p].upper())
                        else:
                            frase_resultante.append(cifra2[p].lower())
                        substituido = True
                        break
                    elif c.lower() == cifra2[p].lower():
                        if c.isupper():
                            frase_resultante.append(cifra1[p].upper())
                        else:
                            frase_resultante.append(cifra1[p].lower())
                        substituido = True
                        break
                if not substituido:
                    frase_resultante.append(c)

            print(''.join(frase_resultante))
        print()

    except EOFError:
        break






    