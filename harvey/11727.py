import sys


def solv(n):
    d = [0]*(n+1)
    for i in range(1, n+1):
        if i == 1:
            d[i] = 1
        elif i == 2:
            d[i] = 3
        elif i >= 3:
            d[i] = d[i-1] + 2 * d[i-2]

    return d[n] % 10007


if __name__ == '__main__':
    read = lambda : sys.stdin.readline()
    n = int(read())
    print(solv(n))
