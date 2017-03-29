count = int(input())

for i in range(count, 0, -1):
    print('{}{}'.format(' '*(count-i), '*'*(2*i-1)))
