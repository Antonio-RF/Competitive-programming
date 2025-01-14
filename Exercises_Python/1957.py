

numero = int(input())

dados = {10: 'A',11: 'B',12: 'C',13: 'D',14: 'E',15: 'F'}

lista = []
while numero != 0:
    k = numero % 16
    lista.append(k)
    numero = numero // 16

resultado = ''
for num in reversed(lista):
    if num in dados:
        resultado += dados[num]
    else:
        resultado += str(num)

print(resultado)