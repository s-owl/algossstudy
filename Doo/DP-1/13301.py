import sys

def fibo(l, num) :
    if num <= 1 :
        return num
    else :
        if l[num] > 0 :
            return l[num]
        l[num] = fibo(l, num-1) + fibo(l, num-2)
        return l[num]

def cal(num) :
    l = [0] * (num+1)
    return (fibo(l, num) * 2 + fibo(l, num-1))*2

def main() :
    count = int(sys.stdin.readline())
    print(cal(count))

if __name__ == '__main__' :
    main()
