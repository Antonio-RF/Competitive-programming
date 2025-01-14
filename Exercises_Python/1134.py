numero = int(input())
alcool = []
gasolina = []
diesel = []

while numero != 4:
    if numero == 1:
        alcool.append(numero)
    elif numero == 2:
        gasolina.append(numero)
    elif numero == 3:
        diesel.append(numero)
    numero = int(input())

print('MUITO OBRIGADO')
print('Alcool:',len(alcool))
print('Gasolina:',len(gasolina))
print('Diesel:',len(diesel))