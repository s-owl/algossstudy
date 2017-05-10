import sys

def countAlpa(l) :
    count_list = [-1] * 26
    for i in range(len(l)) :
        t = ord(l[i]) - ord('a')
        if count_list[t] == -1 :
            count_list[t] = i

    for i in count_list :
        print(i, end=' ')

def main() :
    l = sys.stdin.readline().strip()
    countAlpa(l)

if __name__ == '__main__' :
    main()
