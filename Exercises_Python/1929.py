

a,b,c,d = map(int, input().split())

resultado = 'N'
if (a < b + c) and (b < a + c) and (c < a + b):
    resultado = 'S'
elif (a < b + d) and (b < a + d) and (d < a + b):
    resultado = 'S'
elif (a < c + d) and (c < a + d) and (d < a + c):
    resultado = 'S'
elif (b < c + d) and (c < b + d) and (d < b + c):
    resultado = 'S'
print(resultado)
