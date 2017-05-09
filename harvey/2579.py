import sys


def solv(l):
    d = [[0]*3 for _ in range(len(l)+1)]
    for i in range(1, len(l)+1):
        d[i][0] = max(d[i-1][1], d[i-1][2])
        d[i][1] = d[i-1][0] + l[i-1]
        if i >= 2:
            d[i][2] = d[i-1][1] + l[i-1]
    return max(d[len(l)][1:3])


if __name__ == '__main__':
    read = lambda : sys.stdin.readline()
    N = int(read())
    l = []

    for _ in range(N):
        l.append(int(read()))

    print(solv(l))
