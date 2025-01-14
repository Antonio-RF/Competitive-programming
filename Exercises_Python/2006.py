

tipo = int(input())

a,b,c,d,e = map(int, input().split())
lista = [a,b,c,d,e]

interesse = [c for c in lista if c == tipo]

print(len(interesse))