tamanho, min_soma, max_soma = map(int, input().split())
vetor = list(map(int, input().split()))

resultado = 0
for c in range(len(vetor)):
    for i in range(c+1, len(vetor)):
        if (vetor[c] + vetor[i] >= min_soma) and (vetor[c] + vetor[i] <= max_soma):
            resultado += 1;
        

print(resultado)
