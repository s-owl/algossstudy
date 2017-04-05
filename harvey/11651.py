import sys

case = int(sys.stdin.readline())

l = []

for i in range(case):
    l.append(tuple(map(int, sys.stdin.readline().split())))

def sort(array, col=1):
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
        return sort(less)+sort(equal, 0)+sort(greater)
    else:
        return array

for i in sort(l):
    print(*i)

    
