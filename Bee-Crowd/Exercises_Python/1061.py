

dia_i,numero_i = map(str, input().split())
numero_i = int(numero_i)
numero_i = int(numero_i)

tempo_i = input().strip().split(' : ')
lista1 = list(tempo_i)
hora_i = int(lista1[0])
minuto_i = int(lista1[1])
segundo_i = int(lista1[2])

dia_f,numero_f = map(str, input().split())
numero_f = int(numero_f)
numero_f = int(numero_f)

tempo_f = input().strip().split(' : ')
lista2 = list(tempo_f)
hora_f = int(lista2[0])
minuto_f = int(lista2[1])
segundo_f = int(lista2[2])

soma_segundos_i = segundo_i + (minuto_i * 60) + (hora_i * 3600) + (numero_i * 86400)
soma_seguundo_f = segundo_f + (minuto_f * 60) + (hora_f * 3600) + (numero_f * 86400)
diferença = soma_seguundo_f - soma_segundos_i

print('{} dia(s)'.format(diferença // 86400))
print('{} hora(s)'.format((diferença % 86400) // 3600))
print('{} minuto(s)'.format(((diferença % 86400) % 3600) // 60))
print('{} segundo(s)'.format(((diferença % 86400) % 3600) % 60))







