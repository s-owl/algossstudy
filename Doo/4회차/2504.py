import sys

def push(s, var) :
    s.append(var)

def pop(s) :
    return s.pop()

def calculate(l) :
    s = []
    num = 0

    # 괄호가 열리면 닫혀야 하므로 홀수일 수 없다.
    if len(l) % 2 == 1:
        print(0)
        return

    for i in range(len(l)) :
        if l[i] == '(' :
            push(s, l[i])

        elif l[i] == ')' :
            if len(s) == 0 :
                print(0)
                return
            else :
                temp = pop(s)
                # ()가 2로 저장
                if temp == '(' :
                    push(s, 2)
                    continue
                while temp != '(':
                    # 괄호가 [ ~ ) 가 되는 에러
                    if temp == '[' or len(s) == 0:
                        print(0)
                        return
                    num += temp
                    temp = pop(s)
                push(s, 2 * num)
                num = 0

        elif l[i] == '[' :
            push(s, l[i])

        elif l[i] == ']' :
            if len(s) == 0 :
                print(0)
                return
            else :
                temp = pop(s)
                # []가 3으로 저장
                if temp == '[' :
                    push(s, 3)
                    continue
                while temp != '[' :
                    # 괄호가 ( ~ ] 가 되는 에러
                    if temp == '(' or len(s) == 0:
                        print(0)
                        return
                    num += temp
                    temp = pop(s)
                push(s, 3 * num)
                num = 0
        # '(' ')' '[' ']'로 이루어지지 않은 문자열일 경우
        else :
            print(0)
            return
    
    num = 0
    for i in s :
        # 스텍에 괄호가 남아있을 경우
        if i == '(' or i == '[' :
            print(0)
            return
        num += i        
    print(num)    

def main() :
    l = sys.stdin.readline().strip()
    calculate(l)

if __name__ == '__main__' :
    main()
