

saida = 0
soma_gols_inter = 0
soma_gols_gre = 0
vitorias_inter = 0
vitorias_gre = 0
empate = 0
count = 0
while saida != 2:
    gols_inter,gols_gre = map(int, input().split())

    if gols_inter > gols_gre:
        vitorias_inter += 1
    elif gols_gre > gols_inter:
        vitorias_gre += 1
    else:
        empate += 1

    soma_gols_inter += gols_inter
    soma_gols_gre += gols_gre
    count += 1
    
    print('Novo grenal (1-sim 2-nao)')
    saida = int(input())


print('{} grenais'.format(count))
print('Inter:{}'.format(vitorias_inter))
print('Gremio:{}'.format(vitorias_gre))
print('Empates:{}'.format(empate))
if vitorias_inter > vitorias_gre:
    print('Inter venceu mais')
elif vitorias_gre > vitorias_inter:
    print('Gremio venceu mais')
else:
    print('Nao houve vencedor')




