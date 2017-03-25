while True :
    op = input()
    if op == '0 0' :
        break
    a = op.split(' ')
    print(int(a[0]) + int(a[1]))
