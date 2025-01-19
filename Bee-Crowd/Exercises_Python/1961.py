

altura_pulo, qnt_canos = map(int, input().split())

canos = list(map(int, input().split()))


sapo_pula = True
for i in range(0,qnt_canos - 1):
    if canos[i+1] - canos[i] > altura_pulo:
        sapo_pula = False
    elif abs(canos[i] - canos[i+1]) > altura_pulo:
        sapo_pula = False

if sapo_pula:
    print('YOU WIN')
else:
    print('GAME OVER')