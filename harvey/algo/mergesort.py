def merge(left, right):
    alist = []
    while len(left) != 0 and len(right) != 0:
        if left[0] < right[0]:
            alist.append(left[0])
            left.remove(left[0])
        else:
            alist.append(right[0])
            right.remove(right[0])

    if len(right) == 0:
        alist += left
    else:
        alist += right
    return alist


def mergeSort(alist):
    if len(alist)>1:
        mid = len(alist)//2
        left = alist[:mid]
        right = alist[mid:]

        left = mergeSort(left)
        right = mergeSort(right)
        return merge(left, right)
    return alist


alist = [54,26,93,17,77,31,44,55,20]
print(alist)
print(mergeSort(alist))
