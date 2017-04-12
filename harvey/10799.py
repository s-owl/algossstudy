import sys
read = lambda : sys.stdin.readline().strip()

string = read()
count = 0
bars = 0

string = string.replace('()', '*')

for i in string:
    if i == '(':
        count += 1
    elif i == '*':
        bars += count
    elif i == ')':
        count -= 1
        bars += 1

print(bars)
