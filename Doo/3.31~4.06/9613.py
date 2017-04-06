import sys

def gcd(a, b) :
    if b == 0 :
        return a
    else :
        return gcd(b, a%b)

def gcd_sum(t, count) :
    value = 0
    for i in range(count) :
        for j in range(i+1, count) :
            value += gcd(t[j], t[i])
    return value
    
count = int(sys.stdin.readline())

for i in range(count) :
    t = sys.stdin.readline().split()
    l = []
    for j in range(1, len(t)) :
        l.append(int(t[j]))

    sys.stdout.write(str(gcd_sum(l, int(t[0]))) + '\n')
