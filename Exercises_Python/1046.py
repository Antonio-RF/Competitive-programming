a, b = map(int, input().split())

if b - a > 0:
    print('O JOGO DUROU',b - a,'HORA(S)')
else:
    print('O JOGO DUROU',(b - a) + 24,'HORA(S)')