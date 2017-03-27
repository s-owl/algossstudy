def non_selfnum(n):
    if n >= 1000:
        return n+n//1000+(n%1000)//100+(n%100)//10+(n%10)
    elif n>= 100:
        return n+n//100+(n%100)//10+(n%10)
    elif n>= 10:
        return n+n//10+(n%10)
    elif n>= 1:
        return n+n

l = []

for x in range(10000):
    l.append(non_selfnum(x))

print(*[x for x in range(1, 10000) if x not in l], sep='\n')


