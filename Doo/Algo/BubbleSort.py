def BubbleSort(list) :
    for i in range(len(list)-1, 0, -1) :
        check = True
        for j in range(0, i) :
            if(list[j] > list[j+1]) :
                list[j], list[j+1] = list[j+1], list[j]
                check = False
        if check == True :
            break

list1 = [10,9,8,7,6,5,4,3,2,1]
list2 = [7,9,4,2,1,3,5,10,6,8]
list3 = [2,1,3,4,5,6,7,8,9,10]

print(list1)
BubbleSort(list1)
print(list1)
print()

print(list2)
BubbleSort(list2)
print(list2)
print()

print(list3)
BubbleSort(list3)
print(list3)
