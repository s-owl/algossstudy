import sys

def fibo(l, num) :
    if num <= 1 :
        l[num] = num
        return l[num]
    else :
        if l[num] > 0 :
            return l[num]
        l[num] = fibo(l, num-1) + fibo(l, num-2)
        return l[num]

def main() :
    count = int(sys.stdin.readline())
    l = [0] * (count+1)
    print(fibo(l, count))

if __name__ == '__main__' :
    main()
