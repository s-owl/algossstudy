import sys

def push(s, var) :
    s.append(var)

def pop(s) :
    return s.pop()

def makeSeq(l, count) :
    s = []
    result = []
    num = 0

    for i in range(1, count+1) :
        push(s, i)
        push(result, '+')
        if i == l[num] :
            if len(s) == 0 :
                print('NO')
                return
            pop(s)
            push(result, '-')
            num += 1
            if num == count :
                break
        
        if i > l[num] :
            while i > l[num] :
                if len(s) == 0 :
                    print('NO')
                    return
                if pop(s) == l[num] :
                    push(result, '-')
                    num += 1
                    if num == count : 
                        break
                else :
                    print('NO')
                    return

    for i in result :
        print(i)

def main() :
    l = []
    count = int(sys.stdin.readline())
    for i in range(count) :
        l.append(int(sys.stdin.readline()))

    makeSeq(l, count)

if __name__ == '__main__' :
    main()
