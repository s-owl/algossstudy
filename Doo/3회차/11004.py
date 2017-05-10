import sys

def partition(l, start, end) :
    value = l[end]
    i = start - 1
    for j in range(start, end) :
        if l[j] < value :
            i += 1
            l[i], l[j] = l[j], l[i]
    l[i+1], l[end] = l[end], l[i+1]
    return i + 1

def quickSort(l, start, end, k) :
    middle = partition(l, start, end)
    if k < middle :
        quickSort(l, start, middle-1, k)
    elif k > middle :
        quickSort(l, middle+1, end, k)
    else :
        return

count = list(map(int, sys.stdin.readline().split()))
l = list(map(int, sys.stdin.readline().split()))
 
quickSort(l, 0, len(l)-1, count[1]-1)

sys.stdout.write(str(l[count[1] - 1]) + '\n')
