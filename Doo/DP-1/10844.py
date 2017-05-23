import sys

def counting(l, n) :
    if n == 0 :
        l[0] = [ 0, 1, 1, 1, 1, 1, 1, 1, 1, 1 ]
        return l[0]
    if l[n][0] > 0 :
        return l[n]
    t = counting(l, n-1)
    for i in range(10) :
        if i == 0 :
            l[n][i] = t[i+1]
        elif i == 9 :
            l[n][i] = t[i-1]
        else :
            l[n][i] = t[i-1]+t[i+1]
    return l[n]

def main() :
    num = int(sys.stdin.readline()) 
    ans = 0
    l = [[0] * 10 for _ in range(num)]
    t = counting(l, num-1)
    for i in range(10) :
        ans += t[i]
    print(ans % 1000000000)

if __name__ == '__main__' :
    main()
