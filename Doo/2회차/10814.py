import sys

def quicksort(x):
    if len(x) <= 1:
        return x

    pivot = x[len(x) // 2]
    less = []
    more = []
    equal = []
    
    for a in x:
        if a[0] < pivot[0]:
            less.append(a)
        elif a[0] > pivot[0]:
            more.append(a)
        else:
            equal.append(a)
            
    return quicksort(less) + equal + quicksort(more)
    
count = int(sys.stdin.readline())

t = [0]*count
l = [[0]*2]*count

for i in range(count) :
    t[i] = sys.stdin.readline().split()
    t[i][0] = int(t[i][0])

l = quicksort(t)

for i in range(count) :
    for j in range(2) :
        sys.stdout.write(str(l[i][j]) + ' ')
    sys.stdout.write('\n')
