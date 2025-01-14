

vezes = int(input())

for c in range(1,vezes+1):
    jogador_1,jogador_2 = map(str, input().split())
    if jogador_1 == jogador_2:
        print('Caso #{}: De novo!'.format(c))
    elif (jogador_1 == 'tesoura') and ((jogador_2 == 'lagarto') or (jogador_2 == 'papel')):
        print('Caso #{}: Bazinga!'.format(c))
    elif (jogador_1 == 'papel') and ((jogador_2 == 'pedra') or (jogador_2 == 'Spock')):
        print('Caso #{}: Bazinga!'.format(c))
    elif (jogador_1 == 'pedra') and ((jogador_2 == 'lagarto') or (jogador_2 == 'tesoura')):
        print('Caso #{}: Bazinga!'.format(c))
    elif (jogador_1 == 'lagarto') and ((jogador_2 == 'Spock') or (jogador_2 == 'papel')):
        print('Caso #{}: Bazinga!'.format(c))
    elif (jogador_1 == 'Spock') and ((jogador_2 == 'pedra') or (jogador_2 == 'tesoura')):
        print('Caso #{}: Bazinga!'.format(c))
    elif (jogador_2 == 'tesoura') and ((jogador_1 == 'lagarto') or (jogador_1 == 'papel')):
        print('Caso #{}: Raj trapaceou!'.format(c))
    elif (jogador_2 == 'papel') and ((jogador_1 == 'pedra') or (jogador_1 == 'Spock')):
        print('Caso #{}: Raj trapaceou!'.format(c))
    elif (jogador_2 == 'pedra') and ((jogador_1 == 'lagarto') or (jogador_1 == 'tesoura')):
        print('Caso #{}: Raj trapaceou!'.format(c))
    elif (jogador_2 == 'lagarto') and ((jogador_1 == 'Spock') or (jogador_1 == 'papel')):
        print('Caso #{}: Raj trapaceou!'.format(c))
    elif (jogador_2 == 'Spock') and ((jogador_1 == 'pedra') or (jogador_1 == 'tesoura')):
        print('Caso #{}: Raj trapaceou!'.format(c))

        
    
    
