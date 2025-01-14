

numero = int(input())

quantidades_nas_estrelas = input().split()
valores = [int(numero) for numero in quantidades_nas_estrelas]
soma = sum(valores)

i = 0
visitados = set()
while i >= 0 and i < len(valores):
    p = valores[i]
    if i not in visitados:
        visitados.add(i)

    if p % 2 == 0:
        if p == 0:
            i -= 1
        else:
            soma -= 1
            i -= 1
            valores[i] -= 1
    else:
        soma -= 1
        i += 1
        p -= 1

print(len(visitados),soma)

    


