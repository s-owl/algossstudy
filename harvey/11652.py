import sys
read = lambda : sys.stdin.readline().strip()

n = int(read())
d = dict()
k = ''
num = 0

for _ in range(n):
    r = read()
    if r in d.keys():
        d[r] += 1
    else:
        d[r] = 1

for (key, val) in d.items():
    key = int(key)
    if num < val:
        num = val
        k = key
    elif num == val and k > key:
        k = key

print(k)
