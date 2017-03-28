N = int(input())

for i in range(N):
    ox = input()
    point = 0
    count = 0
    for p in ox:
        if p == 'O':
            count += 1;
            point += count
        elif p == 'X':
            count = 0

    print(point)
