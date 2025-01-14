
#entrada1
quantidade, tamanho = map(int, input().split())

#entrada2
entrada2 = input()
ordem = list(entrada2)

#entrada3
tamanhop, tamanhom, tamanhog = map(int, input().split())

dados = {'P': tamanhop, 'M': tamanhom, 'G': tamanhog}

ordem_do_ataque = []
for p in ordem:
    if p == 'P':
        ordem_do_ataque.append(dados['P'])
    if p == 'M':
        ordem_do_ataque.append(dados['M'])
    if p == 'G':
        ordem_do_ataque.append(dados['G'])

ultimo_ataque = ordem_do_ataque[-1]
muralha = [tamanho]
count_muralhas = 1
for k in ordem_do_ataque:
    for i in range(len(muralha)):
        if k <- muralha[i]:
            muralha[i] -= k
            break
    else:

        if k < muralha[-1]:
            muralha[-1] -= k
        
        elif k == muralha[-1] and k != ultimo_ataque:
            muralha.pop()
            muralha.append(tamanho)
            count_muralhas += 1
        
        if k > muralha[-1]:
            muralha.append(tamanho)
            count_muralhas += 1


print(count_muralhas)
        

    


    
