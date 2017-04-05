n = int(input())

stack = []

for i in range(n):
    command, *arg = input().split()
    if command=='push':
        stack.append(arg[0])
    elif command=='pop':
        print(stack.pop() if stack else -1)
    elif command=='size':
        print(len(stack))
    elif command=='empty':
        print(0 if stack else 1)
    elif command=='top':
        print(stack[-1] if stack else -1)
