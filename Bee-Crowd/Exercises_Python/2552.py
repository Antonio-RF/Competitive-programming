

n, m = map(int, input().split())

matriz = []

for l in range(0, n):
    linha = list(map(int, input().split()))
    matriz.append(linha)

for i in range(n):
    for p in range(m):
        count = 0
        if matriz[i][p] == 0:
            if i + 1 < n and matriz[i + 1][p] == 1:
                count += 1
            if p + 1 < m and matriz[i][p + 1] == 1:
                count += 1
            if i - 1 >= 0 and matriz[i - 1][p] == 1:
                count += 1
            if p - 1 >= 0 and matriz[i][p - 1] == 1:
                count += 1
            matriz[i][p] = count
        

for linha in matriz:
    print(''.join(map(str, linha)))

    

        
    