N = input()
count = 0

for n in range(1, int(N)+1):
    ds = set([])
    l = list(map(int, str(n)))
    
    for a in range(0, len(str(n))-1):
        ds.add(l[a+1] - l[a])

    if len(ds) <= 1:
        count+= 1

print(count)

