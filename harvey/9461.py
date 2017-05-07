import sys


def solv(n):
    d = [0] * (n+1)
    for i in range(1, n+1):
        if i <= 3:
            d[i] = 1
        elif 3 < i <= 5:
            d[i] = 2
        else:
            d[i] = d[i-1] + d[i-5]
    return d[n]


if __name__ == '__main__':
    read = lambda : sys.stdin.readline()
    for _ in range(int(read())):
        print(solv(int(read())))
