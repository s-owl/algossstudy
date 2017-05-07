import sys


def solv(l):
    end = 1000
    prime = []
    for i in range(2, end+1):
        flag = True
        for j in range(2, i):
            if i%j == 0:
                flag = False
        if flag is True:
            prime.append(i)

    return len([n for n in l if n in prime])


if __name__ == '__main__':
    read = lambda : sys.stdin.readline()
    n = int(read())
    l = list(map(int, read().split()))
    print(solv(l))
