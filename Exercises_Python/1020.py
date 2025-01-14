n = int(input())

ano = n // 365
resto_anos = n % 365

mes = resto_anos // 30
dias = resto_anos % 30

print(ano, 'ano(s)')
print(mes, 'mes(es)')
print(dias, 'dia(s)')