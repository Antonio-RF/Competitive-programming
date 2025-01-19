qntd_de_cartas, ataque, defesa, habilidade = map(int, input().split())

todas_as_cartas = []
for c in range(qntd_de_cartas):
    cartas = list(map(int, input().split()))
    todas_as_cartas.append(cartas)

resultado = False

for k in range(len(todas_as_cartas)):
    soma1 = todas_as_cartas[k][0] + todas_as_cartas[k+1][0]
    soma2 = todas_as_cartas[k][1] + todas_as_cartas[k+1][1]
    soma3 = todas_as_cartas[2][1] + todas_as_cartas[k+1][2]
    c = 2
    while soma1 <= ataque and soma2 <= defesa and soma3 <= habilidade:
        if soma1 == ataque:
            if soma2 == defesa:
                if soma3 == habilidade:
                    resultado = True
                    break
        else:
            soma1 += todas_as_cartas[k+c][0]
            soma2 += todas_as_cartas[k+c][1]
            soma3 += todas_as_cartas[k+c][2]
            c += 1

if resultado:
    print('Y')
else:
    print('N')











if resultado:
    print('Y')
else:
    print('N')