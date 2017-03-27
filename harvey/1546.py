count = int(input())
l = list(map(int, input().split()))

print('%.2f' % ((sum(l) * 100) / (max(l) *len(l))))
