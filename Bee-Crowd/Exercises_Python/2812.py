n = int(input())

for _ in range(0,n):
    lista_impares = []
    m = int(input())
    numeros = list(map(int, input().split()))
        
    if len(numeros) != m:
        break

    lista_impares = [c for c in numeros if c % 2 != 0]
    
    if len(lista_impares) != 0:
        lista_impares.sort()
        tam_lista = len(lista_impares)
        for i in range(tam_lista // 2):
            print(lista_impares[tam_lista-1-i], lista_impares[i], end=' ')

        # se o tamanho da lista for ímpar, imprime o elemento do meio fora do laço
        if tam_lista % 2 == 1:
            print(lista_impares[tam_lista // 2])
        
        
    print()
    