import sys


def sort(array, col=0):
    less = []
    equal = []
    greater = []

    if len(array) > 1:
        pivot = array[col]
        for x in array:
            if x[col] < pivot[col]:
                less.append(x)
            if x[col] == pivot[col]:
                equal.append(x)
            if x[col] > pivot[col]:
                greater.append(x)
        return sort(less)+equal+sort(greater)
    else:
        return array


case = int(sys.stdin.readline())

l = []

for i in range(case):
    l.append(list(sys.stdin.readline().split()))
    l[i][0] = int(l[i][0])

for i in sort(l):
    print(*i)
    
