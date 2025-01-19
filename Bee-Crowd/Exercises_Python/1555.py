numero = int(input())

for _ in range(numero):
    x,y = map(int, input().split())

    rafael = (3 * 3 * x * x) + (y * y)
    beto = (2 * x * x) + (5 * 5 * y * y)
    carlos = (-100 * x) + (y * y * y)

    if rafael > beto and rafael > carlos:
        print('Rafael ganhou')
    elif beto > rafael and beto > carlos:
        print('Beto ganhou')
    elif carlos > rafael and carlos > beto:
        print('Carlos ganhou')
