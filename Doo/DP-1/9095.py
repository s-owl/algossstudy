import sys

def calcCount(l, num) :
    if num <= 2 :
        return num
    elif num == 3 :
        return 4
    else :
        if l[num] > 0 :
            return l[num]
        l[num] = calcCount(l, num-1) + calcCount(l, num-2) + calcCount(l, num-3)
        return l[num]

def main() :
    count = int(sys.stdin.readline())
    l = [0] * 11
    for i in range(count) :
        num = int(sys.stdin.readline())
        print(calcCount(l, num))

if __name__ == '__main__' :
    main()
