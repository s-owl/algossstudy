import sys


def solv(n):
    d = [0]*(n+1)
    for i in range(1, n+1):
        if i == 1:
            d[i] = 1
        elif i == 2:
            d[i] = 2
        elif i == 3:
            d[i] = 4
        elif i >= 4:
            d[i] = d[i-1] + d[i-2] + d[i-3]

    return d[n]


if __name__ == '__main__':
    read = lambda : sys.stdin.readline()
    n = int(read())
    for _ in range(n):
        print(solv(int(read())))
