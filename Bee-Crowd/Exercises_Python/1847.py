

entrada = input().split()
lista = list(entrada)

temperatura1 = int(lista[0])
temperatura2 = int(lista[1])
temperatura3 = int(lista[2])

dia1_2 = temperatura2 - temperatura1
dia2_3 = temperatura3 - temperatura2

if dia1_2 < 0 and dia2_3 >= 0:
    print(':)')
elif dia1_2 > 0 and dia2_3 <= 0:
    print(':(')
elif dia1_2 > 0 and dia2_3 > 0 and dia2_3 - dia1_2 < 0:
    print(':(')
elif dia1_2 > 0 and dia2_3 > 0 and dia2_3 - dia1_2 >= 0:
    print(':)')
elif dia1_2 < 0 and dia2_3 < 0 and dia2_3 - dia1_2 > 0:
    print(':)')
elif dia1_2 < 0 and dia2_3 < 0 and dia2_3 - dia1_2 <= 0:
    print(':(')
elif dia1_2 == 0 and dia2_3 > 0:
    print(':)')
else:
    print(':(')