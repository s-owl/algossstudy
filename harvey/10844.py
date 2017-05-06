import sys


def solv(n):
    d = [[0]*10 for _ in range(n+1)]
    for i in range(1, n+1):
        if i == 1:
            d[1] = [0, 1, 1, 1, 1, 1, 1, 1, 1, 1]
        else:
            for j in range(0, 10):
                if 0 < j < 9:
                    d[i][j] = d[i-1][j-1] + d[i-1][j+1]
                elif j == 0:
                    d[i][j] = d[i-1][j+1]
                elif j == 9:
                    d[i][j] = d[i-1][j-1]

    return sum(d[n]) % 1000000000


if __name__ == '__main__':
    read = lambda : sys.stdin.readline()
    print(solv(int(read())))
