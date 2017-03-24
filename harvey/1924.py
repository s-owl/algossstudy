m, d = map(int, input().split())

for i in range(1, m):
    if i in [1,3,5,7,8,10,12]:
        d+=31
    elif i in [4,6,9,11]:
        d+=30
    elif i == 2:
        d+=28
day = ['SUN','MON','TUE','WED','THU','FRI','SAT']
print(day[d%7])
