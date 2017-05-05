import sys

read = lambda : sys.stdin.readline()


def solv(s):
    brackets = s
    stack = []
    num = []
    s = 0
    t = 1
    a = 0

    try:
        for i in range(len(brackets)):
            if brackets[i] == '(':
                stack.append(brackets[i])
                t *= 2
                if brackets[i+1] == ')':
                    num.append(t)

            elif brackets[i] == '[':
                stack.append(brackets[i])
                t *= 3
                if brackets[i+1] == ']':
                    num.append(t)
            elif brackets[i] == ')':
                stack.pop()
                t //= 2

            elif brackets[i] == ']':
                stack.pop()
                t //= 3
    except IndexError:
        return 0

    while len(num) > 0:
        s += num.pop()

    return s


