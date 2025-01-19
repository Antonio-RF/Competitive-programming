quantidade = int(input())

numeros = list()
for count in range(0,quantidade):
    numeros.append(int(input()))

for c in numeros:
    if c == 0:
        print('NULL')
    elif c % 2 == 0:
        if c > 0:
            print('EVEN POSITIVE')
        else:
            print('EVEN NEGATIVE')
    else:
        if c > 0:
            print('ODD POSITIVE')
        else:
            print('ODD NEGATIVE')