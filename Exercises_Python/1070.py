numero = int(input())

if numero % 2 == 0:
      for c in range(numero+1,numero+13,2):
           print(c)
else:
      for c in range(numero,numero+12,2):
           print(c)