name = str(input())
salary = float(input())
sold = float(input())

bonus = 0.15 * sold
total = salary + bonus

print('TOTAL = R$ {:.2f}'.format(total))