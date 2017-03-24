count = int(input())

for n in range(count):
    print("Case #%d:" % (n+1), sum(list(map(int, input().split()))))
