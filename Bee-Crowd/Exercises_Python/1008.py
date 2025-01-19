number = int(input())
hour = int(input())
per_hour = float(input())
salary = hour * per_hour
resultado = round(salary,2)

print('NUMBER =', number)
print('SALARY = U$ {:.2f}'.format(salary))