import sys


def solv(l):
    return sum([i**2 for i in l]) % 10


if __name__ == '__main__':
    read = lambda : sys.stdin.readline()
    l = list(map(int, read().split()))
    print(solv(l))
