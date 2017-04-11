def quicksort(x):
    if len(x) <= 1:
        return x

    pivot = x[len(x) // 2]
    less = []
    more = []
    equal = []
    
    for a in x:
        if int(a) > int(pivot):
            less.append(a)
        elif int(a) < int(pivot):
            more.append(a)
        else:
            equal.append(a)
            
    return quicksort(less) + equal + quicksort(more)


l = input()

s = ''
for i in quicksort(l) :
     s += i
print(s)
