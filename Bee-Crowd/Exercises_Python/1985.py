

numero = int(input())

dados = {'1001': 1.50, '1002': 2.50, '1003': 3.50, '1004': 4.50, '1005': 5.50 }

acumulador = 0
for _ in range(numero):
    modelo, qntd = map(str, input().split())
    acumulador += dados[modelo] * int(qntd)

print('{:.2f}'.format(acumulador))
