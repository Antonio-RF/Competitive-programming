tamanho_lista = int(input())
numeros = list(map(int, input().split()))

for k in range(len(numeros)-1):
    if k < len(numeros):
        if numeros[k] == 1 and numeros[k+1] == 1:
            
