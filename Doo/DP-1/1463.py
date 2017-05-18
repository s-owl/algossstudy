import sys

compare = lambda a, b : a < b and a or b

def calc(num) :
    temp = 1
    l = [0, 0]

    while temp != num :
        temp += 1
        if temp == 2 or temp == 3 :
            l.append(1)
        elif temp % 3 == 0 :
            l.append(compare(l[temp//3], l[temp-1])+1)
        elif temp % 2 == 0 :
            l.append(compare(l[temp//2], l[temp-1])+1)
        else :
            l.append(l[temp-1]+1)

    print(l[temp])

def main() :
    num = int(sys.stdin.readline())
    calc(num)

if __name__ == '__main__' :
    main()
