def merge(left, right) :
    alist = []
    while len(left) != 0 and len(right) != 0:
        if left[0] < right[0] :
            alist.append(left[0])
            left.remove(left[0])
        else :
            alist.append(right[0])
            right.remove(right[0])

    if len(right) == 0 :
        alist += left
    else :
        alist += right
    return alist

def mergeSort(alist) :
    if len(alist) > 1 :
        mid = len(alist) // 2
        left = alist[:mid]
        right = alist[mid:]

        left = mergeSort(left)
        right = mergeSort(right)
        return merge(left, right)
    return alist

alist1 = [10, 9, 8, 7, 6, 5, 4, 3, 2, 1]
alist2 = [7, 9, 4, 2, 1, 3, 5, 10, 6, 8]
alist3 = [2, 1, 3, 4, 5, 6, 7, 8, 9, 10]

print(alist1)
print(mergeSort(alist1))

print(alist2)
print(mergeSort(alist2))

print(alist3)
print(mergeSort(alist3))