code1, amount1, price1 = map(float, input().split())

code2, amount2, price2 = map(float, input().split())

value_to_pay = (amount1 * price1) + (amount2 * price2)

print('VALOR A PAGAR: R$ {:.2f}'.format(value_to_pay))