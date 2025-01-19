linhas = int(input())

for count in range(0,linhas):
    x, y = map(int,input().split())
    if y == 0:
        print('divisao impossivel')
    else:
        divisao = x / y
        print('{:.1f}'.format(divisao))