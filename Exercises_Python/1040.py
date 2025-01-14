n1, n2, n3, n4= input().split()

n1 = float(n1)
n2 = float(n2)
n3 = float(n3)
n4 = float(n4)

media = ((n1 * 2) + (n2 * 3) + (n3 * 4) + (n4 * 1)) / 10

print('Media: {:.1f}'.format(media))

if media >= 7.0:
    print('Aluno aprovado.')

elif (media >= 5.0) and (media < 7.0):
    print('Aluno em exame.')
    nota_do_exame = float(input())
    print('Nota do exame: {}'.format(nota_do_exame))
    media_final = (nota_do_exame + media) / 2
    if media_final >= 5.0:
        print('Aluno aprovado.')
    else:
        print('Aluno reprovado.')
    print('Media final: {:.1f}'.format(media_final))

else:
    print('Aluno reprovado.')