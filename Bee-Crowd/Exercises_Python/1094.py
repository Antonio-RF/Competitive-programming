linhas = int(input())

lista = []
soma_dos_int = 0
soma_dos_coelhos = 0
soma_dos_ratos = 0
soma_dos_sapos = 0
for count in range(0,linhas):
    entrada = input().split()
    lista.append((int(entrada[0]), str(entrada[1])))
    soma_dos_int = soma_dos_int + int(entrada[0])
    if entrada[1] == 'C':
        soma_dos_coelhos = soma_dos_coelhos + int(entrada[0])
    if entrada[1] == 'R':
        soma_dos_ratos = soma_dos_ratos + int(entrada[0])
    if entrada[1] == 'S':
        soma_dos_sapos = soma_dos_sapos + int(entrada[0])

percentual_c = (soma_dos_coelhos / soma_dos_int) * 100
percentual_r = (soma_dos_ratos / soma_dos_int) * 100
percentual_s = (soma_dos_sapos / soma_dos_int) * 100

print('Total:',soma_dos_int,'cobaias')
print('Total de coelhos:',soma_dos_coelhos)
print('Total de ratos:',soma_dos_ratos)
print('Total de sapos:',soma_dos_sapos)
print('Percentual de coelhos: {:.2f}'.format(percentual_c),'%')
print('Percentual de ratos: {:.2f}'.format(percentual_r),'%')
print('Percentual de sapos: {:.2f}'.format(percentual_s),'%')