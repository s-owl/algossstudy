import sys

def sort(array):
    less = []
    equal = []
    greater = []

    if len(array) > 1:
        pivot = array[0]
        for x in array:
            if x < pivot:
                less.append(x)
            if x == pivot:
                equal.append(x)
            if x > pivot:
                greater.append(x)
        return sort(less)+equal+sort(greater)
    else:
        return array

n = int(sys.stdin.readline())

l = []

for i in range(n):
    l.append(int(sys.stdin.readline()))

for i in sort(l):
    print(i)
    
