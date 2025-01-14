

while True:
    try:

        habitantes, consultas = map(int, input().split())

        lista_consultas = []


        for _ in range(0,habitantes):
            nota = int(input())
            lista_consultas.append(nota)

        lista_consultas.sort(reverse=True)

        for p in range(0,consultas):
            interesse_de_consulta = int(input())
            print(lista_consultas[interesse_de_consulta - 1])

    except EOFError:
        break



