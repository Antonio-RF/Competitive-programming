x = int(input())
z = int(input())

while z <= x:
    z = int(input())

count = 1
k = x
while k < z:
    x += 1
    k += x
    count += 1

print(count)