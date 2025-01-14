

competidores = int(input())

for _ in range(0,competidores):
    nome = str(input())
    grau = float(input())
    notas = list(map(float, input().split()))

    maior = max(notas)
    menor = min(notas)

    notas.remove(maior)
    notas.remove(menor)

    soma = sum(notas)
    
    nota_final = grau * soma

    print('{} {:.2f}'.format(nome,nota_final))