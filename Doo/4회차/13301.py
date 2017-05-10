import sys

def fiboTileCal(num) :
    temp = 0
    l = []

    l.append(1)
    for i in range(num-1) :
        l.append(temp + l[i])
        temp = l[i]

    if num == 1 :
        print(4)
    else :
        print((l[num-1] * 2 + l[num-2]) * 2)

def main() :
    count = int(sys.stdin.readline())
    fiboTileCal(count)

if __name__ == '__main__' :
    main()

