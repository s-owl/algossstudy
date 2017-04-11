import sys
read = lambda : sys.stdin.readline()


count, k = map(int, read().split())
l = list(map(int, read().split()))

l.sort()

print(l[k-1])
