import sys


def solv(l):
    n = len(l)
    d = [0]*(n+1)
    for i in range(1, n+1):
        if i == 1:
            d[i] = l[i-1]
        elif i == 2:
            d[i] = d[i-1] + l[i-1]
        elif i >= 3:
            d[i] = max(d[i-1], d[i-2] + l[i-1], d[i-3] + l[i-2] + l[i-1])
    return d[n]


if __name__ == '__main__':
    read = lambda : sys.stdin.readline().strip()
    n = int(read())
    l = []
    for _ in range(n):
        l.append(int(read()))
    print(solv(l))
