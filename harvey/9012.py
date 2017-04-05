def vps(ps):
    stack = []
    for s in range(len(ps)):
        if ps[s]=='(':
            stack.append(1)
        elif ps[s]==')':
            if stack:
                stack.pop()
            else:
                return 'NO'
    return 'NO' if stack else 'YES'


n = int(input())

for i in range(n):
    print(vps(input()))
