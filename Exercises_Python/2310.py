

numero = int(input())

count_s = 0
count_b= 0
count_a = 0
count_as= 0
count_ab= 0
count_aa = 0
for c in range(0,numero):
    nome = str(input())
    qsaque,qblock,qatack = map(int, input().split())
    asaque,ablock,aatack = map(int, input().split())

    count_s = count_s + qsaque
    count_b = count_b + qblock
    count_a = count_a + qatack

    count_as = count_as + asaque
    count_ab = count_ab + ablock
    count_aa = count_aa + aatack


print('Pontos de Saque: {:.2f} %.'.format((count_as / count_s) * 100))
print('Pontos de Bloqueio: {:.2f} %.'.format((count_ab / count_b) * 100))
print('Pontos de Ataque: {:.2f} %.'.format((count_aa / count_a) * 100))

