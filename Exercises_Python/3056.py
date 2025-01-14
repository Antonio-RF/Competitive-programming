numero = int(input())

a1 = 3
potencia = 0
count = 1

while count < numero:
    potencia += 1
    a1 = a1 + (2 ** potencia)
    count += 1

print(a1 * a1)
