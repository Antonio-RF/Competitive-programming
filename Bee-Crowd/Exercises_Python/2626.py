

while True:
    try:

        escolha1,escolha2,escolha3 = map(str, input().split())

        dados = {'dodo':escolha1,'leo':escolha2,'pepper':escolha3}

        if dados['dodo'] == dados['leo'] == dados['pepper']:
            print('Putz vei, o Leo ta demorando muito pra jogar...')
        elif (dados['dodo'] == 'pedra' and dados['leo'] == 'tesoura' and dados['pepper'] == 'tesoura') or \
            (dados['dodo'] == 'papel' and dados['leo'] == 'pedra' and dados['pepper'] == 'pedra') or \
            (dados['dodo'] == 'tesoura' and dados['leo'] == 'papel' and dados['pepper'] == 'papel'):
            print('Os atributos dos monstros vao ser inteligencia, sabedoria...')
        elif (dados['leo'] == 'pedra' and dados['dodo'] == 'tesoura' and dados['pepper'] == 'tesoura') or \
            (dados['leo'] == 'papel' and dados['dodo'] == 'pedra' and dados['pepper'] == 'pedra') or \
            (dados['leo'] == 'tesoura' and dados['dodo'] == 'papel' and dados['pepper'] == 'papel'):
            print('Iron Maiden\'s gonna get you, no matter how far!')
        elif (dados['pepper'] == 'pedra' and dados['leo'] == 'tesoura' and dados['dodo'] == 'tesoura') or \
            (dados['pepper'] == 'papel' and dados['leo'] == 'pedra' and dados['dodo'] == 'pedra') or \
            (dados['pepper'] == 'tesoura' and dados['leo'] == 'papel' and dados['dodo'] == 'papel'):
            print('Urano perdeu algo muito precioso...')
        else:
            print('Putz vei, o Leo ta demorando muito pra jogar...')

    except EOFError:
        break