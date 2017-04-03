n = int(input())

l = []

for i in range(n):
    l.append(int(input()))

for i in range(len(l)-1, 1, -1):
    index = 0
    max_num = -1000     #문제에서 값의 범위내 최소값이 -999이다.
    for j in range(i+1):
        if (l[j]>max_num):
            max_num = l[j]
            index = j

    l[index], l[i] = l[i], l[index]

for i in l:
    print(i)
    
