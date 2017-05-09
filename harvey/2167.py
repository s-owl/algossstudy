import sys


def solv(b, l):
    i, j, x, y = l
    s = 0
    for n in range(i-1, x):
        s += sum(b[n][j-1:y])

    return s


if __name__ == '__main__':
    read = lambda : sys.stdin.readline()
    n, m = map(int, read().split())
    b = [[0]*m for _ in range(n)]
    for i in range(n):
        b[i] = list(map(int, read().split()))
    k = int(read())
    for _ in range(k):
        print(solv(b, list(map(int, read().split()))))
