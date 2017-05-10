import sys


def solv(l, s):
    r = [0] * 3
    l.sort()
    for i in range(len(s)):
        if s[i] == 'A':
            r[i] = l[0]
        elif s[i] == 'B':
            r[i] = l[1]
        elif s[i] == 'C':
            r[i] = l[2]

    return r


if __name__ == '__main__':
    read = lambda : sys.stdin.readline()
    l = list(map(int, read().split()))
    s = read()
    print(*solv(l, s))
