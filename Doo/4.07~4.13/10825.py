import sys

def upper_quicksort(x, cols=1):
    if len(x) <= 1:
        return x

    pivot = x[len(x) // 2]
    less = []
    more = []
    equal = []
    
    for a in x:
        if a[cols] > pivot[cols]:
            less.append(a)
        elif a[cols] < pivot[cols]:
            more.append(a)
        else:
            equal.append(a)
            
    if cols == 3 :
        t_equal = dic_quicksort(equal)
    else :
        t_equal = lower_quicksort(equal, cols + 1)
    return upper_quicksort(less, cols) + t_equal + upper_quicksort(more, cols)


def lower_quicksort(x, cols=2):
    if len(x) <= 1:
        return x

    pivot = x[len(x) // 2]
    less = []
    more = []
    equal = []
    
    for a in x:
        if a[cols] < pivot[cols]:
            less.append(a)
        elif a[cols] > pivot[cols]:
            more.append(a)
        else:
            equal.append(a)
            
    t_equal = upper_quicksort(equal, cols + 1)
    return lower_quicksort(less, cols) + t_equal + lower_quicksort(more, cols)


def dic_quicksort(x) :
    if len(x) <= 1:
        return x

    pivot = x[len(x) // 2]
    less = []
    more = []
    equal = []
    
    for a in x:
        if a < pivot:
            less.append(a)
        elif a > pivot :
            more.append(a)
        else:
            equal.append(a)

    return dic_quicksort(less) + equal + dic_quicksort(more)


count = int(sys.stdin.readline())

t = [0]*count
l = [[0]*4]*count

for i in range(count) :
    t[i] = sys.stdin.readline().split()
    for j in range(1, 4) :
        t[i][j] = int(t[i][j])

l = upper_quicksort(t, 1)

for i in range(count) :
    sys.stdout.write(str(l[i][0]) + '\n')

