n, x = map(int, input().split())
a = list(map(int, input().split()))
l = []

for small in a:
    if small < x:
        l.append(small)

print(*l)
