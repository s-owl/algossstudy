import sys

def word_quicksort(x):
    if len(x) <= 1:
        return x

    pivot = x[len(x) // 2]
    less = []
    more = []
    equal = []
    
    for a in x:
        if len(a) < len(pivot):
            less.append(a)
        elif len(a) > len(pivot):
            more.append(a)
        else:
            equal.append(a)
            
    t_equal = dic_quicksort(equal)
    
    return word_quicksort(less) + t_equal + word_quicksort(more)

def dic_quicksort(x) :
    if len(x) <= 1:
        return x

    pivot = x[len(x) // 2]
    less = []
    more = []
    equal = ['']
    
    for a in x:
        if a < pivot:
            less.append(a)
        elif a > pivot :
            more.append(a)
        else:
            equal[0] = a

    return dic_quicksort(less) + equal + dic_quicksort(more)
    

count = int(sys.stdin.readline())

t = [0]*count
for i in range(count) :
    t[i] = sys.stdin.readline()

l = word_quicksort(t)

for i in l :
    sys.stdout.write(i)

