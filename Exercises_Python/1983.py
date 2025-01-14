

numero = int(input())

maior = 0
matricula_vencedor = 0
for c in range(numero):
    matricula,nota = map(float, input().split())
    if nota > maior:
        maior = nota
        matricula_vencedor = matricula

if maior >= 8:
    print('{:.0f}'.format(matricula_vencedor))
else:
    print('Minimum note not reached')

    
