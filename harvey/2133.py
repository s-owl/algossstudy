import sys


def solv(n):
    d = [[0]*8 for _ in range(n+1)]
    for i in range(1, n+1):
        if i == 1:
            d[i] = [0, 0, 0, 0, 0, 0, 0, 1]
        else:
            d[i][0] = d[i-1][7]
            d[i][1] = d[i-1][6]
            d[i][2] = d[i-1][5]
            d[i][3] = d[i-1][4] + d[i-1][7]
            d[i][4] = d[i-1][3]
            d[i][5] = d[i-1][2]
            d[i][6] = d[i-1][1] + d[i-1][7]
            d[i][7] = d[i-1][0] + d[i-1][3] + d[i-1][6]

    if n % 2 != 0:
        return 0
    return sum(d[n])


if __name__ == '__main__':
    read = lambda : sys.stdin.readline()
    print(solv(int(read())))
