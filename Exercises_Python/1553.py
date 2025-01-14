n,k = map(int, input().split())

while n != 0 and k != 0:
    resultado = 0
    repeticoes = {}
    lista = list(map(int, input().split()))
    for i in lista:
        if i not in repeticoes:
            repeticoes[i] = []
        repeticoes[i].append(1)

    for t in repeticoes:
        if len(repeticoes[t]) >= k:
            resultado += 1
    print(resultado)

    n,k = map(int, input().split())
