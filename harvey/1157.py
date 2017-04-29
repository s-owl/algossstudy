import sys

read = lambda : sys.stdin.readline().strip().lower()

t = read()
d = {}
m = 0
q = False
p = ''

for i in t:
    if i not in d:
        d[i] = 0
    d[i] += 1

for k, v in d.items():
    if v > m:
        q = False
        m = v
        p = k.upper()
    elif v == m:
        q = True
        p = '?'

print(p)

