linha1 = input()
linha2 = input()

lista1 = list(linha1)
lista2 = list(linha2)

lista_cpf = []
for c in range(len(lista1)):
    if lista1[c] == '0' or lista1[c] == "1" or lista1[c] == '2' or lista1[c] == '3' or lista1[c] == '4' \
    or lista1[c] == '5' or lista1[c] == '6' or lista1[c] == '7' or lista1[c] == '8' \
    or lista1[c] == '9':
        lista_cpf.append(lista1[c])
    
    if len(lista_cpf) == 11:
        ultima_posicao = ultima_posicao.index(lista1[c])
        break

propina1 = []
for k in range(len(lista1) - ultima_posicao - 1):
    if lista1[c] == '0' or lista1[c] == "1" or lista1[c] == '2' or lista1[c] == '3' or lista1[c] == '4' \
    or lista1[c] == '5' or lista1[c] == '6' or lista1[c] == '7' or lista1[c] == '8' or lista1[c] == '.'\
    or lista1[c] == '9':
        propina1.append(lista1[c])



print('cpf {}'.format(''.join(lista_cpf)))
print(''.join(propina1))
