import sys

case = int(sys.stdin.readline())

l = []

for i in range(case):
    point = sys.stdin.readline().split()
    point[1:] = map(int, point[1:])
    l.append(point)

print(l)


def sort(array, col=1, order=-1):
    print('array', array)
    print('col', col)
    less = []
    equal = []
    greater = []

    if len(array) > 1:
        pivot = array[0]
        print('pivot', array[0])
        if order>0:
            for x in array:
                if x[col] < pivot[col]:
                    less.append(x)
                if x[col] == pivot[col]:
                    equal.append(x)
                if x[col] > pivot[col]:
                    greater.append(x)
        else:
            for x in array:
                if x[col] > pivot[col]:
                    less.append(x)
                if x[col] == pivot[col]:
                    equal.append(x)
                if x[col] < pivot[col]:
                    greater.append(x)
 
        # return sort(less)+sort(sort(sort(equal, 1, -1), 2), 3, -1)+sort(greater)
        print('less', less)
        print('equal', equal)
        print('greater', greater)
        return sort(sort(sort(less, 0, 1), 3), 2, 1)+sort(sort(sort(equal, 0, 1), 3), 2, 1)+sort(sort(sort(greater, 0, 1), 3), 2, 1)
        # return sort(less)+sort(equal, 2, 1)+sort(greater)
    else:
        return array

l = sort(l)
for i in l:
    print(*i)

    
