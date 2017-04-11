import sys

def count_piece(x) :
    stack_count = 0
    piece_count = 0
    for i in range(len(x)-1) :
        if x[i] == x[i+1] :
            if x[i] == '(' :
                stack_count += 1
            else :
                piece_count += 1
                stack_count -= 1
        else :
            if x[i] == '(' :
                piece_count += stack_count
    sys.stdout.write(str(piece_count)+'\n')

s = sys.stdin.readline()
count_piece(s)
