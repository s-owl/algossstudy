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


alist1 = [10, 9, 8, 7, 6, 5, 4, 3, 2, 1]
alist2 = [7, 9, 4, 2, 1, 3, 5, 10, 6, 8]
alist3 = [2, 1, 3, 4, 5, 6, 7, 8, 9, 10]

print(alist1)
quickSort(alist1, 0, len(alist1) - 1)
print(alist1)

print(alist2)
quickSort(alist2, 0, len(alist2) - 1)
print(alist2)

print(alist3)
quickSort(alist3, 0, len(alist3) - 1)
print(alist3)