a, b = map(int, input().split())

while (a > 0) and (b > 0):
    menor = min(a,b)
    maior = max(a,b)
    valores = list(range(menor, maior + 1))
    soma = sum(valores)
    print(' '.join(map(str, valores)),' ','Sum=',soma, sep='')
    a, b = map(int, input().split())