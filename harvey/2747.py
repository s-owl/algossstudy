import sys


def solv(n):
    d = [0]*(n+1)
    for i in range(1, n+1):
        if i == 1:
            d[i] = 1
        else:
            d[i] = d[i-1] + d[i-2]

    return d[n]


if __name__ == '__main__':
    read = lambda : sys.stdin.readline()
    print(solv(int(read())))
