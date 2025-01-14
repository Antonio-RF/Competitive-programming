tempo_de_viajem = int(input())
velocidade = int(input())

distancia = tempo_de_viajem * velocidade
litros = distancia / 12

print('{:.3f}'.format(litros))