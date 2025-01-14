supermercados = int(input())

lista_resultado = []
for _ in range(supermercados):
    bits, gramas = map(float, input().split())
    lista_resultado.append((bits * 1000) / gramas)

print('{:.2f}'.format(min(lista_resultado)))



