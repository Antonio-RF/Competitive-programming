numero = int(input())
posicao_inicial = str(input())

resultado = "0"
moeda = posicao_inicial
for _ in range(numero):
    n = int(input())
    if n == 1 and moeda == "A":
        moeda = 'B'
    elif n == 1 and moeda == "B":
        moeda = 'A'
    elif n == 2 and moeda == "B":
        moeda = 'C'
    elif n == 2 and moeda == "C":
        moeda = 'B'
    elif n == 3 and moeda == "A":
        moeda = 'C'    
    elif n == 3 and moeda == "C":
        moeda = 'A' 

print(moeda)


