numero = int(input())

for _ in range(numero):
    referencia = 100
    nmr_de_alunos,sorteado = map(int, input().split())
    chutes = list(map(int, input().split()))
    
    guardar = 0
    for k in range(len(chutes)):
        if chutes[k] == sorteado:
            guardar = k + 1
            break
        elif abs(sorteado - chutes[k]) < referencia:
            referencia = abs(sorteado - chutes[k])
            guardar = k + 1
    
    print(guardar)


