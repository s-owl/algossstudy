import sys

read = lambda : sys.stdin.readline()


brackets = read()
stack = []
num = []
s = 0
t = 1

for i in range(len(brackets)):
    if brackets[i] == '(':
        stack.append(brackets[i])
        t *= 2
        if brackets[i+1] == ')':
            num.append(t)
        elif brackets[i+1] == ']':
            print(0)
            exit(0)

    elif brackets[i] == '[':
        stack.append(brackets[i])
        t *= 3
        if brackets[i+1] == ']':
            num.append(t)
        elif brackets[i+1] == ']':
            print(0)
            exit(0)

    elif brackets[i] == ')':
        if len(stack) == 0:
            print(0)
            exit(0)

        if stack.pop() != '(':
            print(0)
            exit(0)

        t //= 2

    elif brackets[i] == ']':
        if len(stack) == 0:
            print(0)
            exit(0)

        if stack.pop() != '[':
            print(0)
            exit(0)

        t //= 3

if len(stack) > 0:
    print(0)
    exit(0)
while len(num) > 0:
    s += num.pop()

print(s)
