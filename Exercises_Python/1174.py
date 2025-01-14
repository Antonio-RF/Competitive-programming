valores = list()
for count in range(0,100):
    valores.append(float(input()))

for idx, c in enumerate(valores):
    if c <= 10:
         print('A[{}] = {}'.format(idx, c))