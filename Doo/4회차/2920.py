import sys

def check(l) :
    check_ascending = True
    check_descending = True
    
    for i in range(8) :
        if l[i] != i+1 :
            check_ascending = False
        if l[i] != 8-i :
            check_descending = False

    if check_ascending == True :
        print('ascending')
    elif check_descending == True :
        print('descending')
    else :
        print('mixed')
        

def main() :
    l = list(map(int, sys.stdin.readline().split()))
    check(l)

if __name__ == '__main__' :
    main()
