

casos = int(input())

for _ in range(casos):
    intervalo1,intervalo2 = map(int, input().split())
    
    raiz_menor = intervalo1 ** 0.5
    raiz_maior = intervalo2 ** 0.5 // 1

    if raiz_menor % 1 != 0:
        (raiz_menor + 1) // 1
    
    print(int(raiz_maior - raiz_menor + 1))
