n = int(input())

horas = n // 3600
resto_horas = n % 3600

minutos = resto_horas // 60
segundos = resto_horas % 60

print(horas,':',minutos,':',segundos,sep='')