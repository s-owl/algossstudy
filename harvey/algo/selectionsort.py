arr = [1, 5, 3, 7, 8, 2, 4]
print(arr)

for i in range(len(arr)-1, 1, -1):
    index = 0
    max_num = 0
    for j in range(i+1):
        if (arr[j]>max_num):
            max_num = arr[j]
            index = j

    print('max: ',arr[index],'<-> arr[i]', arr[i])
    arr[index], arr[i] = arr[i], arr[index]

print(arr)
        



    
