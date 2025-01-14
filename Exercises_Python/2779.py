

total_de_espacos = int(input())
qntd_compradas = int(input())

lista = []
for c in range(1,total_de_espacos + 1):
    lista.append(c)

print(lista)


count = 0
while count < qntd_compradas:
    comprada = int(input())
    for c in range(len(lista) - 1):
        if comprada == lista[c]:
            lista.pop(c)
            break
    print(lista)
        
    count += 1

print(len(lista))