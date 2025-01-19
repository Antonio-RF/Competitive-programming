

a,b,c = map(int, input().split())
a2 = a * a
b2 = b * b
c2 = c * c

if (a < b + c) and (b < a + c) and (c < a + b):
    if (a == b) and (b == c):
        print('Valido-Equilatero')
        if (a2 == b2 + c2) or (b2 == a2 + c2) or (c2 == a2 + b2):
            print('Retangulo: S')
        else:
            print('Retangulo: N')
    elif (a != b) and (a != c) and (b != c):
        print('Valido-Escaleno')
        if (a2 == b2 + c2) or (b2 == a2 + c2) or (c2 == a2 + b2):
            print('Retangulo: S')
        else:
            print('Retangulo: N')
    else:
        print('Valido-Isoceles')
        if (a2 == b2 + c2) or (b2 == a2 + c2) or (c2 == a2 + b2):
            print('Retangulo: S')
        else:
            print('Retangulo: N')
else:
    print('Invalido')

