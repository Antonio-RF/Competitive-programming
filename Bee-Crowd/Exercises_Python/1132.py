a = int(input())
b = int(input())
valores = [a,b]

maior = max(valores)
menor = min(valores)

nao_13 = []
for c in range(menor,maior+1):
    if c % 13 != 0:
        nao_13.append(c)
    
print(sum(nao_13))