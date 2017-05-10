def BubbleSort(l) :
    for i in range(len(l)-1, 0, -1) :
        check = True
        for j in range(0, i) :
            if(l[j] > l[j+1]) :
                l[j], l[j+1] = l[j+1], l[j]
                check = False
        if check == True :
            break

count = int(input())
num = [0] * count
for i in range(0, count) :
    num[i] = int(input())

BubbleSort(num)
for i in range(0, count) :
    print(num[i])
