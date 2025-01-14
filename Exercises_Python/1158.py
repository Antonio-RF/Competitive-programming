

numero = int(input())

for c in range(0,numero):
    x,y = map(int, input().split())
    lista = []

    if x % 2 != 0:
        for p in range(x,x+(y*2),2):
            lista.append(p)
    else:
        for p in range(x+1,x+1+(y*2),2):
            lista.append(p)
    
    print(sum(lista))

    
