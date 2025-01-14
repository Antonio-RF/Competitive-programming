a, b = input().split()
a = float(a)
b = float(b)

if (a == 0) and (b == 0):
    print('Origem')

if (a == 0) and (b != 0):
    print('Eixo Y')

if (a != 0) and (b == 0):
    print('Eixo X')

if (a > 0) and (b > 0):
    print('Q1')

if (a > 0) and (b < 0):
    print('Q4')

if (a < 0) and (b > 0):
    print('Q2')

if (a < 0) and (b < 0):
    print('Q3')