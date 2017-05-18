import sys

def maxPrice(storage, l, count) :
    if count == 1 :
        return l[count-1]
    else :
        maxnum = l[count-1]
        if storage[count-1] > 0 :
            return storage[count-1]
        for i in range(1, count) :
            temp = maxPrice(storage, l, count-i) + maxPrice(storage, l, i)
            if maxnum > temp :
                storage[count-1] = maxnum
            else :
                storage[count-1] = temp
                maxnum = temp
        return storage[count-1]

def main() :
    num = int(sys.stdin.readline())
    l = list(map(int, sys.stdin.readline().split()))
    storage = [0] * num
    print(maxPrice(storage, l, num))

if __name__ == '__main__' :
    main()
