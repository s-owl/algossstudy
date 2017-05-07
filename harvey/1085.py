import sys


def solv(x, y, w, h):
    a = [w-x, x, h-y, y]
    m = a[0]
    for i in range(1, 4):
        if m > a[i]:
            m = a[i]
    return m


if __name__ == '__main__':
    read = lambda : sys.stdin.readline()
    x, y, w, h = map(int, read().split())
    print(solv(x, y, w, h))
