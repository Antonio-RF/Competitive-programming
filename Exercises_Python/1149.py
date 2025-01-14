entradas = input().split()
lista = list(entradas)

valores_desejados = [int(lista[0]),int(lista[-1])]

soma = 0
for i in range(0,valores_desejados[1]):
    soma = soma + valores_desejados[0] + i

print(soma)