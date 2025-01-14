aposta = list(map(int, input().split()))
sorteados = list(map(int, input().split()))

resultado = 0
for c in aposta:
    if c in sorteados:
        resultado += 1

if resultado < 3:
    print('azar')
elif resultado == 3:
    print('terno')
elif resultado == 4:
    print('quadra')
elif resultado == 5:
    print('quina')
elif resultado == 6:
    print('sena')