import sys

def countingsort( aList, k ):
    counter = [0] * ( k + 1 )
    for i in aList:
        counter[i] += 1

    ndx = 0
    for i in range( len( counter ) ):
        while 0 < counter[i]:
            aList[ndx] = i
            ndx += 1
            counter[i] -= 1
        
count = int(sys.stdin.readline())
l = [int(sys.stdin.readline()) for _ in range(count)]

countingsort(l, 10000)
for i in l :
    sys.stdout.write(str(i) + '\n')
