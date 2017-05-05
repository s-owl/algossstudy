import sys


def solv(N):
    l = [0]*(N+1)

    l[1] = 0
    for i in range(2, N+1):
        l[i] = l[i-1] + 1
        if i%2 == 0 and l[i] > l[i//2] + 1:
            l[i] = l[i//2] + 1
        if i%3 == 0 and l[i] > l[i//3] + 1:
            l[i] = l[i//3] + 1

    return l[N]


if __name__ == '__main__':
    read = lambda : sys.stdin.readline()
    N = int(read())
    print(solv(N))
