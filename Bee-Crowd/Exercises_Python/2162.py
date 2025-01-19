

numero = int(input())

valores = list(map(int, input().split()))

paisagem = True
diferenca = valores[1] - valores[0]

for i in range(2, len(valores)):
    nova_diferenca = valores[i] - valores[i-1]
    if nova_diferenca * diferenca >= 0:  
        paisagem = False
        break
    diferenca = nova_diferenca

if paisagem:
    print('1')
else:
    print('0')
    
    
    

