numero = int(input())

for _ in range(numero):
    d1,d2 = map(int, input().split())
    area = (d1 * d2) // 2
    print('{} cm2'.format(area))