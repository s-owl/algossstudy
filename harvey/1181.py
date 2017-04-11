import sys
read = lambda : sys.stdin.readline()

N = int(read())
l = []
for _ in range(N):
    l.append(read()[:-1])

l = list(set(l))
l.sort(key=lambda x: (len(x), x))
for e in l:
    print(e)
