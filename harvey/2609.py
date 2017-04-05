import sys

a, b = map(int, sys.stdin.readline().split())
la = [i for i in range(1,a+1) if a%i == 0]
lb = [i for i in range(1,b+1) if b%i == 0]
gcd = max([i for i in la if i in lb])
lcm = a*b//gcd
print(gcd)
print(lcm)

