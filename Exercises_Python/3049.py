b = int(input())
t = int(input())

felix = ((t + b) * 70) / 2
marzia = 11200 - (((t + b) * 70) / 2)

if felix > marzia:
    print('1')
elif marzia > felix:
    print('2')
elif marzia == felix:
    print('0')
