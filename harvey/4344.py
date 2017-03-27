for _ in range(int(input())):
    l = list(map(int, input().split()))
    n = l.pop(0)
    avg = sum(l)/n
    count = 0

    for point in l:
        if point > avg:
            count += 1

    print('%.3f%%' % (count/n * 100))
