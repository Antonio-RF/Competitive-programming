

while True:
    try:

        disciplinas = int(input())

        numerador = 0
        denominador = 0
        for c in range(0,disciplinas):
            nota,carga_horaria = map(int, input().split())

            multpli_n = nota * carga_horaria
            multpli_d = 100 * carga_horaria

            numerador = numerador + multpli_n
            denominador = denominador + multpli_d

        print('{:.4f}'.format(numerador / denominador))

    except EOFError:
        break
    