

vezes = int(input())

for c in range(0,vezes):
    jogador_1 = input()
    jogador_2 = input()
    
    if jogador_1 == 'ataque' and jogador_2 == 'pedra':
        print('Jogador 1 venceu')
    elif jogador_2 == 'ataque' and jogador_1 == 'pedra':
        print('Jogador 2 venceu')
    elif jogador_1 == 'pedra' and jogador_2 == 'papel':
        print('Jogador 1 venceu')
    elif jogador_2 == 'pedra' and jogador_1 == 'papel':
        print('Jogador 2 venceu')
    elif jogador_1 == 'ataque' and jogador_2 == 'papel':
        print('Jogador 1 venceu')
    elif jogador_2 == 'ataque' and jogador_1 == 'papel':
        print('Jogador 2 venceu')
    elif jogador_2 == 'papel' and jogador_1 == 'papel':
        print('Ambos venceram')
    elif jogador_2 == 'pedra' and jogador_1 == 'pedra':
        print('Sem ganhador')
    elif jogador_2 == 'ataque' and jogador_1 == 'ataque':
        print('Aniquilacao mutua')


    
    
    