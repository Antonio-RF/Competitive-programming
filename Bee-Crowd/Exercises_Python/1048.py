salario = float(input())

if salario <= 400.00:
    print('Novo salario: {:.2f}'.format(salario + (salario * 0.15)))
    print('Reajuste ganho: {:.2f}'.format(salario * 0.15))
    print('Em percentual: 15 %')
    
elif salario <= 800.00:
    print('Novo salario: {:.2f}'.format(salario + (salario * 0.12)))
    print('Reajuste ganho: {:.2f}'.format(salario * 0.12))
    print('Em percentual: 12 %')

elif salario <= 1200.00:
    print('Novo salario: {:.2f}'.format(salario + (salario * 0.10)))
    print('Reajuste ganho: {:.2f}'.format(salario * 0.10))
    print('Em percentual: 10 %')
    
elif salario <= 2000:
    print('Novo salario: {:.2f}'.format(salario + (salario * 0.07)))
    print('Reajuste ganho: {:.2f}'.format(salario * 0.07))
    print('Em percentual: 7 %')

else:
    print('Novo salario: {:.2f}'.format(salario + (salario * 0.04)))
    print('Reajuste ganho: {:.2f}'.format(salario * 0.04))
    print('Em percentual: 4 %')