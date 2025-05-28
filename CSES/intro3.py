input1 = str(input());

salva = 0
count = 1

for i in range(1, len(input1)):
    if input1[i] == input1[i - 1]:
        count += 1
    else:
        if count > salva:
            salva = count
        count = 1

if count > salva:
	salva = count

print(salva);
