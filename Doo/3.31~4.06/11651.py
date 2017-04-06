import sys

def quicksort(x, cols=1):
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
            
    t_equal = quicksort(equal, 0)
    return quicksort(less, cols) + t_equal + quicksort(more, cols)
    
count = int(sys.stdin.readline())

t = [0]*count
l = [[0]*2]*count

for i in range(count) :
    t[i] = sys.stdin.readline().split()
    for j in range(2) :
        t[i][j] = int(t[i][j])

l = quicksort(t)

for i in range(count) :
    for j in range(2) :
        sys.stdout.write(str(l[i][j]) + ' ')
    sys.stdout.write('\n')
