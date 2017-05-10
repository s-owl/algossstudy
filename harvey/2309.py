import sys


def solv(l):
    all_pairs = [(i, j) for i in l for j in l if i != j]
    for p in all_pairs:
        if sum(l) - sum(p) == 100:
            l.remove(p[0])
            l.remove(p[1])
            l.sort()
            return l


if __name__ == '__main__':
    read = lambda : sys.stdin.readline()
    l = [int(read()) for _ in range(9)]
    result = solv(l)
    for r in result:
        print(r)
