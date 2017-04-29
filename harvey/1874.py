import sys

read = lambda : sys.stdin.readline().strip()
stack = []
result = []
N = int(read())
l = []
s = 0
prev = 0

for _ in range(N):
    l.append(int(read()))


for now in l:
    if prev > now:
        if len(stack) > 0 and now != stack.pop():
            print('NO')
            exit(0)
        else:
            result.append('-')
    elif prev < now:
        for _ in range(now - s):
            result.append('+')
            s += 1
            stack.append(s)
        stack.pop()
        result.append('-')
    prev = now

for r in result:
    print(r)
