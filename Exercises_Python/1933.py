

a,b = map(int, input().split())

if a != b:
    maior = (a + b + abs(a - b)) / 2
    print('{:.0f}'.format(maior))
elif a == b:
    print(a)