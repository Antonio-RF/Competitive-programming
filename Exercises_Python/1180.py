numero = int(input())

valores = []
for _ in range(numero):
    try:
        valores.extend(map(int, input().split()))
        if len(valores) >= 10:
            break
    except EOFError:
        break

menor = min(valores)
posicao = valores.index(min(valores))

print('Menor valor: {}'.format(menor))
print('Posicao: {}'.format(posicao))