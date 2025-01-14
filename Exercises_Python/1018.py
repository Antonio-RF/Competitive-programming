dinheiro = int(input())
notas_de_cem = 0
notas_de_cinquenta = 0
notas_de_vinte = 0
notas_de_dez = 0
notas_de_cinco = 0
notas_de_dois = 0
notas_de_um = 0
print(dinheiro)


while dinheiro != 0:
    if dinheiro >= 100:
        notas_de_cem += 1
        dinheiro -= 100
    
    elif dinheiro >= 50:
        notas_de_cinquenta += 1
        dinheiro -= 50
        
    elif dinheiro >= 20:
        notas_de_vinte += 1
        dinheiro -= 20
        
    elif dinheiro >= 10:
        notas_de_dez += 1
        dinheiro -= 10
        
    elif dinheiro >= 5:
        notas_de_cinco += 1
        dinheiro -= 5
        
    elif dinheiro >= 2:
        notas_de_dois += 1
        dinheiro -= 2
        
    elif dinheiro >= 1:
        notas_de_um += 1
        dinheiro -= 1
        

print(notas_de_cem, 'nota(s) de R$ 100,00')
print(notas_de_cinquenta, 'nota(s) de R$ 50,00')
print(notas_de_vinte, 'nota(s) de R$ 20,00')
print(notas_de_dez, 'nota(s) de R$ 10,00')
print(notas_de_cinco, 'nota(s) de R$ 5,00')
print(notas_de_dois, 'nota(s) de R$ 2,00')
print(notas_de_um, 'nota(s) de R$ 1,00')