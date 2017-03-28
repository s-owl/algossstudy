A = int(input())
B = int(input())
C = int(input())
result = A * B * C

l = list(map(int, str(result)))

for i in range(0,10):
    print(l.count(i))
