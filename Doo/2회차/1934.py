import sys

def gcd(a, b):
  while (b != 0):
    temp = a % b
    a = b
    b = temp
  return abs(a)

def lcm(a, b):
  gcd_value = gcd(a, b)
  if (gcd_value == 0): return 0
  return abs( (a * b) // gcd_value )

count = int(sys.stdin.readline())

for i in range(count) :
    t = sys.stdin.readline().split()
    for j in range(2) :
        t[j] = int(t[j])

    sys.stdout.write(str(lcm(t[0], t[1])) + '\n')
