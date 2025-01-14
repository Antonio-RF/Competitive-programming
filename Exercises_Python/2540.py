

while True:
    try:

        numero = int(input())
        votos = list(map(int, input().split()))
        favoraveis = [c for c in votos if c == 1]
        
        total_votos = len(votos)
        total_favoraveis = len(favoraveis)

        if total_favoraveis >= (total_votos * (2/3)):
            print('impeachment')
        else:
            print('acusacao arquivada')

    except EOFError:
        break





