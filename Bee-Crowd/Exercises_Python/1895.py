nmr_de_cartas, carta_inicial, limite = map(int, input().split())


soma_alice = 0
soma_bob = 0
for c in range(nmr_de_cartas-1):
    carta_nova = int(input())
    if abs(carta_inicial - carta_nova) <= limite:
        if c % 2 == 0:
            soma_alice += abs(carta_inicial - carta_nova)
            carta_inicial = carta_nova
        else:
            soma_bob += abs(carta_inicial - carta_nova)
            carta_inicial = carta_nova
    
print(soma_alice, soma_bob)
