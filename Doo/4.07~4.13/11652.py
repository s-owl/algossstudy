import sys

def countFunc(l) :
    x = {l[0] : 1}
    most_count = 0
    most_count_num = 2**62

    for i in range(1, len(l)) :
        if l[i] in x :
            x[l[i]] += 1
        else :
            x[l[i]] = 1

    for j in x :
        if x.get(j) > most_count or (x.get(j) == most_count and most_count_num > j):
            most_count_num = j
            most_count = x.get(j)

    return most_count_num

        
count = int(sys.stdin.readline())
l = []
for i in range(count) :
    l.append(int(sys.stdin.readline()))
 
sys.stdout.write(str(countFunc(l)) + '\n')
