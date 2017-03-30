def SelectionSort(l) :
    for i in range(len(l)-1, 0, -1) :
        max_num = l[0]
        count = 0
        for j in range(1, i+1) :
            if(max_num < l[j]) :
                 count = j
                 max_num = l[j]
        l[count], l[i] = l[i], l[count]

l = [10,7,2,1,7,4,6,5,4,9]

print(l)
SelectionSort(l)
print(l)
