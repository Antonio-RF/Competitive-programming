a, b, c = input().split()
a = int(a)
b = int(b)
c = int(c)

m_two = ((a + b + abs(a - b))) / 2

maior = ((m_two + c + abs(m_two - c))) / 2

print(int(maior), 'eh o maior')