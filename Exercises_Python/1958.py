

numero = input().split('.')
lista = list(numero)

if len(lista) == 2:
    depois_do_ponto = [lista[1].split()]
    print(depois_do_ponto)
    print('{}.{}E{}{}'.format(lista[0],))

