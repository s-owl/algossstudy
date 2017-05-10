import sys

def up_quicksort(x):
    if len(x) <= 1:
        return x

    pivot = x[len(x) // 2]
    less = []
    more = []
    equal = []
    
    for a in x:
        if a < pivot:
            less.append(a)
        elif a > pivot:
            more.append(a)
        else:
            equal.append(a)
            
    return up_quicksort(less) + equal + up_quicksort(more)

def low_quicksort(x):
    if len(x) <= 1:
        return x

    pivot = x[len(x) // 2]
    less = []
    more = []
    equal = []
    
    for a in x:
        if a > pivot:
            less.append(a)
        elif a < pivot:
            more.append(a)
        else:
            equal.append(a)
            
    return low_quicksort(less) + equal + low_quicksort(more)

    
def checkMin(l1, l2, count) :
    l1 = up_quicksort(l1)
    l2 = low_quicksort(l2)
    min_num = 0

    for i in range(count) :
        min_num += l1[i] * l2[i]

    print(min_num)

def main() :
    count = int(sys.stdin.readline())
    l1 = list(map(int, sys.stdin.readline().split()))
    l2 = list(map(int, sys.stdin.readline().split()))

    checkMin(l1, l2, count)

if __name__ == '__main__' :
    main()
