

dados = {1: 'I', 5: 'V', 10: 'X', 50: 'L', 100: 'C', 500: 'D', 1000: 'M'}

numero = int(input())

numeros_em_romano = []
for valor, numeral_romano in sorted(dados.items(), reverse=True):
    while numero >= valor:
        numeros_em_romano.append(numeral_romano)
        numero -= valor

for c in numeros_em_romano:
    if 

resultado = ''.join(numeros_em_romano)
print(resultado)
    