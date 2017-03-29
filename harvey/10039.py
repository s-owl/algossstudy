l = []
for i in range(5):
    l.append(int(input()))
    if l[i] < 40:
        l[i] = 40

print(sum(l)//5)
