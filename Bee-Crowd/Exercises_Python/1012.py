a, b, c = input().split()

a = float(a)
b = float(b)
c = float(c)


print('TRIANGULO: {:.3f}'.format((a * c) / 2))
print('CIRCULO: {:.3f}'.format(3.14159 * c * c))
print('TRAPEZIO: {:.3f}'.format(((a + b) * c) / 2))
print('QUADRADO: {:.3f}'.format(b * b))
print('RETANGULO: {:.3f}'.format(a * b))