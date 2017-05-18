import sys

def calclen(l, num) :
    if num <= 2 :
        return 1
    else :
        if l[num] > 0 :
            return l[num]
        l[num] = calclen(l, num-2) + calclen(l, num-3)
        return l[num]

def main() :
    num = int(sys.stdin.readline())
    l = [0] * 100
    for i in range(num):
        t = int(sys.stdin.readline())
        print(calclen(l, t-1))


if __name__ == '__main__' :
    main()
