result = []
num = int(input())

for i in range(0, num) : 
    op = input()
    a = op.split(',')
    print(int(a[0]) + int(a[1]))
