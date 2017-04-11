import sys

case = int(sys.stdin.readline())

l = []

for i in range(case):
    point = sys.stdin.readline().split()
    point[1:] = map(int, point[1:])
    l.append(point)

l.sort(key=lambda x: (-x[1], x[2], -x[3], x[0]))

for i in l:
    print(i[0])
