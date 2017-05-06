import sys


def solv(n, l):
    d = [[0]*(n+1) for _ in range(n+1)]
    for i in range(1, n+1):
        for j in range(1, i+1):
            d[i][j] = d[i-j][0] + l[j-1]
        d[i][0] = max(d[i][1:])
    return d[n][0]


if __name__ == '__main__':
    read = lambda : sys.stdin.readline()
    n = int(read())
    l = list(map(int, read().split()))
    print(solv(n, l))
