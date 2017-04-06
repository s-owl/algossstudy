import sys


def gcd(a, b):
    la = [i for i in range(1,a+1) if a%i == 0]
    lb = [i for i in range(1,b+1) if b%i == 0]
    return max([i for i in la if i in lb])

n = int(sys.stdin.readline())

for _ in range(n):
    count, *numbers = map(int, sys.stdin.readline().split())
    total = 0
    for i in range(count):
        for j in range(i+1, count):
            total += gcd(numbers[i], numbers[j])
    print(total)
