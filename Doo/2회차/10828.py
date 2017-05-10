import sys

def stack_push(stack, value):
    global top
    stack.append(value)
    top += 1
    
def stack_pop(stack) :
    global top
    if top >= 0 :
        sys.stdout.write(str(stack[top]) + '\n')
        stack.pop()
        top -= 1
    else :
        sys.stdout.write('-1\n')

def stack_top(stack) :
    global top
    if top >= 0 :
        sys.stdout.write(str(stack[top]) + '\n')
    else :
        sys.stdout.write('-1\n')

def stack_size() :
    global top
    if top >= 0 :
        sys.stdout.write(str(top + 1) + '\n')
    else :
        sys.stdout.write('0\n')

def stack_empty() :
    global top
    if top >= 0 :
        sys.stdout.write('0\n')
    else :
        sys.stdout.write('1\n')

s = []
top = -1
count = int(sys.stdin.readline())

for i in range(count) :
    t = sys.stdin.readline().split()

    if t[0] == 'push' :
        stack_push(s, int(t[1]))
    elif t[0] == 'pop' :
        stack_pop(s)
    elif t[0] == 'top' :
        stack_top(s)
    elif t[0] == 'size' :
        stack_size()
    else :
        stack_empty()

