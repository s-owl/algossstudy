import sys

read = lambda : sys.stdin.readline().strip()

l = list(map(int, read().split()))
p = ''

for i in range(1, len(l)):
    if i/l[i-1] == 1 and p !='descending':
        p = 'ascending'
    elif i+l[i-1] == 9 and p !='ascending':
        p = 'descending'
    else:
        print('mixed')
        exit()

print(p)

