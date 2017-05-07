import sys


def solv(l):
    n = len(l)
    d = [[0]*3 for _ in range(n)]
    d[0] = l[0][:]
    for i in range(1, n):
        d[i][0] = min(d[i-1][1], d[i-1][2]) + l[i][0]
        d[i][1] = min(d[i-1][0], d[i-1][2]) + l[i][1]
        d[i][2] = min(d[i-1][0], d[i-1][1]) + l[i][2]
    return min(d[n-1])


if __name__ == '__main__':
    read = lambda : sys.stdin.readline()
    n = int(read())
    l = [[0]*3 for _ in range(n)]
    for i in range(n):
        l[i] = list(map(int, read().split()))
    print(solv(l))
