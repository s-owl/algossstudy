import sys


def solv(l):
    n = len(l)
    m = len(l[0])
    d = [[0]*m for _ in range(n)]
    for i in range(n):
        for j in range(m):
            if i == 0 and j == 0:
                d[i][j] = l[i][j]
            elif i == 0:
                d[i][j] = d[i][j-1] + l[i][j]
            elif j == 0:
                d[i][j] = d[i-1][j] + l[i][j]
            else:
                d[i][j] = max(d[i][j-1], d[i-1][j]) + l[i][j]

    return d[n-1][m-1]


if __name__ == '__main__':
    read = lambda : sys.stdin.readline()
    rows, cols = map(int, read().split())
    l = [[0]*cols for _ in range(rows)]
    for i in range(rows):
        l[i] = list(map(int, read().split()))
    print(solv(l))
