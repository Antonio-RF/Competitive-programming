soma_n = 1
soma_d = 1
soma_total = 0
for c in range(1,41,2):
    soma_total += (soma_n / soma_d)
    soma_n += 2
    soma_d *= 2

print('{:.2f}'.format(soma_total))