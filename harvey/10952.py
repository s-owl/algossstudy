EXIT="0 0"
while(1):
    l = input()
    if l==EXIT: break
    print(sum(list(map(lambda a: int(a), l.split()))))
