import sys

def countAlpa(s) :
    l = [0] * 26
    max_count = 0
    max = 0

    for i in s :
        if i >= 'a' :
            l[ord(i)-ord('a')] += 1
        else :
            l[ord(i)-ord('A')] += 1

    for i in range(1, 26) :
        if l[i] == l[max] :
            max_count += 1
        elif l[i] > l[max] :
            max = i
            max_count = 0

    if max_count == 0 :
        print(chr(ord('A') + max))
    else :
        print('?')

def main() :
    s = sys.stdin.readline().strip()
    
    countAlpa(s)

if __name__ == '__main__' :
    main()
