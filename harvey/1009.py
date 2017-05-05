import sys

read = lambda : sys.stdin.readline()

N = int(read())

for _ in range(N):
    a, b = map(int, read().split())
    t = 1
    l = []

    for i in range(b):
        t = (t * a) % 10
        if t in l:
            break
        l.append(t)

    r = l[(b % len(l))-1]

    if r == 0:
        r = 10

    print(r)

