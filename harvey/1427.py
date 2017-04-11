import sys
read = lambda : sys.stdin.readline()

N = list(map(int, read()[:-1]))
C = [0]*10

for i in range(len(N)):
    C[N[i]] += 1

for i in range(len(C), 0, -1):
    for _ in range(C[i-1]):
        print(i-1, end='')
