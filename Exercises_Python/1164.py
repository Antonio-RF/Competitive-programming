numero = int(input())

for count in range(0,numero):
    n = int(input())
    soma = []
    for i in range(1,n):
        if n % i == 0:
            soma.append(i)
    if sum(soma) == n:
        print('{} eh perfeito'.format(n))
    else:
        print('{} nao eh perfeito'.format(n))