import sys


def solv(n):
    string = ''
    space = ' '
    star = '*'
    for i in range(1, n+1):
        string += ((n-i) * space) + ((2*i-1) * star) + '\n'
    for i in range(n-1, 0, -1):
        string += ((n-i) * space) + ((2*i-1) * star) + '\n'

    return string.strip('\n')

if __name__ == '__main__':
    read = lambda : sys.stdin.readline()
    print(solv(int(read())))
