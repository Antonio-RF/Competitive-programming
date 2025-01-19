x, y = map(int,input().split())

while x != y:
    if x - y > 0:
        print('Decrescente')
    elif x - y < 0:
        print('Crescente')
    x, y = map(int,input().split())