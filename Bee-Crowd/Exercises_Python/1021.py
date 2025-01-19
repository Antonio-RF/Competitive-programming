partes = float(input())

inteira = int(partes)
decimal = int((partes*100) % 100)


notas_de_cem = 0
notas_de_cinquenta = 0
notas_de_vinte = 0
notas_de_dez = 0
notas_de_cinco = 0
notas_de_dois = 0
notas_de_um = 0
moedas_de_um = 0
moedas_de_cinquenta = 0
moedas_de_vintecinco = 0
moedas_de_dez = 0
moedas_de_zerocinco = 0
moedas_de_zeroum = 0


while inteira != 0:
    if inteira >= 100:
        notas_de_cem += 1
        inteira -= 100
    
    elif inteira >= 50:
        notas_de_cinquenta += 1
        inteira -= 50
        
    elif inteira >= 20:
        notas_de_vinte += 1
        inteira -= 20
        
    elif inteira>= 10:
        notas_de_dez += 1
        inteira -= 10
        
    elif inteira >= 5:
        notas_de_cinco += 1
        inteira -= 5
        
    elif inteira >= 2:
        notas_de_dois += 1
        inteira -= 2
    
    elif  inteira >= 1:
        moedas_de_um += 1
        inteira -= 1
 
while decimal != 0:
        
    if decimal >= 50:
        moedas_de_cinquenta += 1
        decimal -= 50
        
    elif decimal >= 25:
        moedas_de_vintecinco += 1
        decimal -= 25
        
    elif decimal >= 10:
        moedas_de_dez += 1
        decimal -= 10
        
    elif decimal >= 5:
        moedas_de_zerocinco += 1
        decimal -= 5
        
    elif decimal >= 1:
        moedas_de_zeroum += 1
        decimal -= 1
        
print('NOTAS:')
print(notas_de_cem, 'nota(s) de R$ 100.00')
print(notas_de_cinquenta, 'nota(s) de R$ 50.00')
print(notas_de_vinte, 'nota(s) de R$ 20.00')
print(notas_de_dez, 'nota(s) de R$ 10.00')
print(notas_de_cinco, 'nota(s) de R$ 5.00')
print(notas_de_dois, 'nota(s) de R$ 2.00')
print('MOEDAS:') 
print(moedas_de_um, 'moeda(s) de R$ 1.00')
print(moedas_de_cinquenta, 'moeda(s) de R$ 0.50')
print(moedas_de_vintecinco, 'moeda(s) de R$ 0.25')
print(moedas_de_dez, 'moeda(s) de R$ 0.10')
print(moedas_de_zerocinco, 'moeda(s) de R$ 0.05')
print(moedas_de_zeroum, 'moeda(s) de R$ 0.01')