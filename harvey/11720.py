count = int(input())

text = input()
l = []
for i in range(count):
    l.append(text[i])

print(sum(list(map(int, l))))
