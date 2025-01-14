

t = int(input())

while t != 0:
    acumulador = 0
    for _ in range(0,t):
        entrada = input().split(maxsplit=1)  
        quantidade = int(entrada[0])
        tipo = entrada[1].strip()

        if tipo == 'suco de laranja':
            tipo = 120
            tipo = int(tipo)
        elif tipo == 'morango fresco' or tipo == 'mamao':
            tipo = 85
            tipo = int(tipo)
        elif tipo == 'goiaba vermelha':
            tipo = 70
            tipo = int(tipo)
        elif tipo == 'manga':
            tipo = 56
            tipo = int(tipo)
        elif tipo == 'laranja':
            tipo = 50
            tipo = int(tipo)
        elif tipo == 'brocolis':
            tipo = 34
            tipo = int(tipo)
        
        qnt_vitc = quantidade * tipo
        acumulador = acumulador + qnt_vitc

    if (acumulador >= 110) and (acumulador <= 130):
        print('{} mg'.format(acumulador))
    elif acumulador > 130:
        print('Menos {} mg'.format(acumulador - 130))
    elif acumulador < 110:
        print('Mais {} mg'.format(110 - acumulador))

    t = int(input())



        
        