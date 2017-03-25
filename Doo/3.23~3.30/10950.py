num = int(input())
result = []

for i in range(0, num) :
    op = input()
    a = op.split(' ')
    result.append(int(a[0]) + int(a[1]))

for i in range(0, num) :
    print(result[i])
