import sys

read = lambda : sys.stdin.readline().strip()

t = read()
l = [-1]*26

for i in range(len(t)):
    n = ord(t[i])-97
    if l[n] == -1:
        l[n] = i

print(*l)
