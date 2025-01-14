

gritos = []
acumulador = 0
while len(gritos) < 3:
    sinal = input()
    if sinal == 'caw caw':
        gritos.append('caw caw')
        print(acumulador)
        acumulador = 0
    else:
        if sinal == '--*':
            acumulador += 1
        elif sinal == '-*-':
            acumulador += 2
        elif sinal == '-**':
            acumulador += 3
        elif sinal == '*--':
            acumulador += 4
        elif sinal == '*-*':
            acumulador += 5
        elif sinal == '**-':
            acumulador += 6
        elif sinal == '***':
            acumulador += 7

if len(gritos) == 3 and acumulador > 0:
    print(acumulador)