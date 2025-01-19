numero = int(input())

for _ in range(numero):
    qntd_de_alunos = int(input())
    notas = list(map(int, input().split()))

    notas_ordenadas = notas[:]
    notas_ordenadas.sort(reverse=True)

    count = 0
    for k in range(len(notas)):
        if notas[k] == notas_ordenadas[k]:
            count += 1

    print(count)