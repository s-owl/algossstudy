import sys

def calccount(l, num) :
    if num == 0 :
        return 0
    elif num == 1 :
        return 3
    elif num == 2 :
        return 11
    else :
        if l[num] > 0 :
            return l[num]
        l[num] = calccount(l, num-2) * 2 + calccount(l, num-1) * 3 + calccount(l, num-1) - calccount(l, num-2) * 3
        return l[num]

def main() :
    num = int(sys.stdin.readline())
    l = [0] * (num//2 + 1)

    if(num % 2 == 0) :
        print(calccount(l, num//2))
    else :
        print(0)

if __name__ == '__main__' :
    main()
