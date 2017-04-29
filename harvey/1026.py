import sys

read = lambda : sys.stdin.readline()

def sort(arr, ascending=True):
    for i in range(len(arr)-1, 0, -1):
        for j in range(i):
            if ascending:
                if arr[j] > arr[j+1]:
                    arr[j], arr[j+1] = arr[j+1], arr[j]
            else:
                if arr[j] < arr[j+1]:
                    arr[j], arr[j+1] = arr[j+1], arr[j]
    return arr

N = int(read())
A = list(map(int, read().split()))
B = list(map(int, read().split()))
s = 0

A = sort(A)
B = sort(B, ascending=False)

for i in range(N):
    s += A[i]*B[i]

print(s)

