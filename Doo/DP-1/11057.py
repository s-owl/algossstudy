import sys
sys.setrecursionlimit(1003)

def counting(l, n) :
    if n == 0 :
        l[0] = [ 1, 1, 1, 1, 1, 1, 1, 1, 1, 1 ]
        return l[0]
    if l[n][0] > 0 :
        return l[n]
    t = counting(l, n-1)
    for i in range(9, -1, -1) :
        if i == 9 :
            l[n][i] = t[i]
        else :
            l[n][i] = l[n][i+1] + t[i]
    return l[n]

def main() :
    num = int(sys.stdin.readline()) 
    ans = 0
    l = [[0] * 10 for _ in range(num)]
    t = counting(l, num-1)
    for i in range(10) :
        ans += t[i]
    print(ans % 10007)

if __name__ == '__main__' :
    main()
