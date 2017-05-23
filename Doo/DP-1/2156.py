import sys
sys.setrecursionlimit(5000)

def counting(l, result, num) :
    if num == 0 :
        result[num] = l[num]
        return result[num]
    elif num == 1 :
        result[num] = l[num-1]+l[num]
        return result[num]
    elif num == 2 :
        t = l[num-1] > l[num-2] and l[num-1] or l[num-2]
        r = counting(l, result, num-1)
        result[num] = r > (l[num]+t) and r or l[num]+t
        return result[num]
    else :
        if result[num] > 0 :
            return result[num]
        t1 = l[num]+l[num-1]+counting(l, result, num-3)
        t2 = l[num]+counting(l, result, num-2)
        t = t1 > t2 and t1 or t2
        r = counting(l, result, num-1)
        result[num] = r > t and r or t
        return result[num]

def main() :
    count = int(sys.stdin.readline())
    l = []
    result = [0] * count
    for i in range(count) :
        l.append(int(sys.stdin.readline()))
    print(counting(l,result, count-1))

if __name__ == '__main__' :
    main()
