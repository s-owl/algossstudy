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

def quickSort(l, start, end) :
    if start >= end :
        return
    middle = partition(l, start, end)
    quickSort(l, start, middle-1)
    quickSort(l, middle+1, end)
        
count = int(sys.stdin.readline())
l = [int(sys.stdin.readline()) for _ in range(count)]

quickSort(l, 0, count-1)
for i in l :
    sys.stdout.write(str(i) + '\n')
