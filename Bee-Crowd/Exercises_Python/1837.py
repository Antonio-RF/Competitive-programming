

a,b = map(int, input().split())

if (a > 0) and (b < 0):
    q = -1 * (a // abs(b))
    r = a % abs(b)


else:
    q = a // b
    r = a % b

print(q,r)
