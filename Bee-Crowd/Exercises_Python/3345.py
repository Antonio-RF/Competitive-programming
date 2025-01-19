

numero = int(input())


for _ in range(numero):
    l,r,k = map(int, input().split())

    lista_primos = []
    for p in range(l,r+1):
        is_prime = True
        if p == 1:
            is_prime = False
            continue
        for j in range(2,int(p ** 0.5)+1):
            if p % j == 0:
                is_prime = False
                break
        if is_prime:
            lista_primos.append(p)
    
    if k > len(lista_primos):
        print('-1')
    else:
        print(lista_primos[k-1])

        

          
