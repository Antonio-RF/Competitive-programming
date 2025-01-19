numero = int(input())

for _ in range(numero):
    valores = input().split()
    lista = list(valores)
    populacao_a = int(lista[0])
    populacao_b = int(lista[1])
    crescimento_a = float(lista[2]) / 100
    crescimento_b = float(lista[3]) / 100

    count = 0
    while populacao_a <= populacao_b and count <= 100:
        ganho_a = populacao_a * crescimento_a
        ganho_b = populacao_b * crescimento_b
        populacao_a += int(ganho_a)
        populacao_b += int(ganho_b)
        count += 1
    if count <= 100:    
        print('{} anos.'.format(count))
    else:
        print('Mais de 1 seculo.')