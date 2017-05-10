import sys

read = lambda : sys.stdin.readline().strip()


N = int(read())
l = [0]*N

for i in range(N):
    if i == 0:
        l[i] = 4
    elif i == 1:
        l[i] = 6
    else:
        l[i] = l[i-1] + l[i-2]

print(l[N-1])
        