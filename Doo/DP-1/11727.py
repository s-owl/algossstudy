import sys
sys.setrecursionlimit(1003)

def calcCount(l, num) :
    if num <= 1 :
        return num
    elif num == 2 :
        return num + 1
    else :
        if l[num] > 0 :
            return l[num]
        l[num] = calcCount(l, num-1) + calcCount(l, num-2) * 2
        return l[num]

def cal(num) :
    l = [0] * (num+1)
    return calcCount(l, num)

def main() :
    count = int(sys.stdin.readline())
    print(cal(count) % 10007)

if __name__ == '__main__' :
    main()
