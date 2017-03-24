count = int(input())

for _ in range(count):
    print(sum(list(map(lambda a: int(a), input().split()))))
