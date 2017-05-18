import sys
sys.setrecursionlimit(10000)

def calc(l, result, row, col) :
    if result[row][col] >= 0 :
        return result[row][col]

    if row == 0 and col==0 :
        temp = 0
    elif row == 0 :
        temp = calc(l, result, row, col-1)
    elif col == 0 :
        temp = calc(l, result, row-1, col)
    else :
        a = calc(l, result, row, col-1)
        b = calc(l, result, row-1, col)
        temp = a > b and a or b

    result[row][col] = temp + l[row][col]
    return result[row][col]

def main() :
    row_col = list(map(int, sys.stdin.readline().split()))
    l = [[0] * row_col[1]] * row_col[0]
    result = [[-1]* row_col[1] for _ in range(row_col[0])]

    for i in range(row_col[0]) :
        l[i] = list(map(int, sys.stdin.readline().split()))

    print(calc(l, result, row_col[0]-1, row_col[1]-1))


if __name__ == '__main__' :
    main()
