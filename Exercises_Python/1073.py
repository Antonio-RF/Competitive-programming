n = int(input())

for c in range(2,n,2):
     print('{}^2 = {}'.format(c, c ** 2))

if n % 2 == 0:
    print('{}^2 = {}'.format(n, n ** 2))