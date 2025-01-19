n, m = map(int, input().split())

matriz = []
for _ in range(n):
    matriz.append(list(map(str, input().split())))

for k in matriz:
    caracteres = list(k)

print(caracteres[1])

for linha in matriz:
    print(' '.join(linha))
    
    