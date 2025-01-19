dia1,dia2 = map(int, input().split())

if dia2 <= 2:
    print("nova")
elif dia2 <= 96:
    if dia1 < dia2:
        print("crescente")
    else:
        print("minguante")
elif dia2 <= 100:
    print("cheia")