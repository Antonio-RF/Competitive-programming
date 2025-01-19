idade_monica = int(input())
idade_filho1 = int(input())
idade_filho2 = int(input())

idade_filho3 = idade_monica - (idade_filho1 + idade_filho2)

idades = [idade_filho1, idade_filho2, idade_filho3]

print(max(idades))