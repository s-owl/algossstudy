import sys
read = lambda : sys.stdin.readline().strip()

N, K = map(int, read().split())
d = {}
s = 0

for i in range(N):
    key = read()
    if key not in d:
        d[key] = 0
    d[key] += 1

for v in d.values():
    if v > K:
        s += v//K + bool(v%K)
    else:
        s +=1

print(s)
