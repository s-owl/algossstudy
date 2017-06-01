import sys


def solv(chess):
    cnt = 0
    for i in range(8):
        for j in range(8):
            if (i+j) % 2 == 0 and chess[i][j] == 'F':
                    cnt += 1

    return cnt


if __name__ == '__main__':
    read = lambda : sys.stdin.readline().strip()
    chess = []
    for _ in range(8):
        chess.append(read())

    print(solv(chess))
