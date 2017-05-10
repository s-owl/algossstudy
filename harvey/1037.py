import sys


def solv(l):
    minv = maxv = l[0]
    for i in range(len(l)):
        if minv > l[i]:
            minv = l[i]
        if maxv < l[i]:
            maxv = l[i]

    return minv * maxv

if __name__ == '__main__':
    read = lambda : sys.stdin.readline()
    N = read()
    l = list(map(int, read().split()))
    print(solv(l))
