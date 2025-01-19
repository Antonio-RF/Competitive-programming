a, b, c = map(int, input().split())

lista = [a,b,c]

ordem_decrescente = sorted(lista)

for numero in ordem_decrescente:
    print(numero)

print()
print(a)
print(b)
print(c)