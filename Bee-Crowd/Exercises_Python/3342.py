

numero = int(input())

if numero % 2 == 0 and numero != 2:
    print('{} casas brancas e {} casas pretas'.format((numero ** 2) // 2,(numero ** 2) // 2))

elif numero == 2:
    print('2 casas brancas e 2 casas pretas')

else:
    print('{} casas brancas e {} casas pretas'.format(((numero ** 2) // 2) + 1,(numero ** 2) // 2))


          