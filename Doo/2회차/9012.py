count = int(input())

for i in range(count) :
    t = input()
    check = 0

    if len(t) == 0 :
        print('No')
        continue
    
    for j in range(0, len(t)) :        
        if t[j] == '(' :            
            check += 1
        elif t[j] == ')' :
            check -= 1
            if check < 0 :
                break
        else :
            check -= 1
            break

    if check == 0 :
        print('YES')
    else :
        print('NO')
