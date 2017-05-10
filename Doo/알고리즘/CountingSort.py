def CountingSort(alist, num) :
    # A는 정렬할 배열을 저장
    A = alist

    # N은 입력된 숫자의 개수
    N = len(A)

    # 0으로 초기화된 입력을 num+1 길이의 배열 count를 생성
    count = [0]*(num+1)
    # countSum은 누적합을 저장하는 배열
    countSum = [0]*(num+1)

    # 숫자 등장 횟수 세기
    for i in range(0, N) :
        count[A[i]] += 1

    # 숫자 등장 횟수 누적합 구하기
    countSum[0] = count[0]
    for i in range(1, num+1) :
        countSum[i] = countSum[i-1] + count[i]

    # B는 정렬된 결과를 저장하는 배열
    B = [0]*(N+1)

    for i in range(N-1, -1, -1) :
        B[countSum[A[i]]] = A[i]
        countSum[A[i]] -= 1

    # 수열 A를 정렬한 결과인 수열 B를 출력
    result = ''
    for i in range(1, N+1) :
        result += str(B[i]) + ' '

    print(result)

def main() :
    alist1 = [5, 2, 3, 4, 5, 2, 3, 4, 1, 1, 2, 3, 4, 5, 3]
    CountingSort(alist1, 5)

    alist2 = [0, 1, 3, 5, 3, 4, 2, 6, 7, 9, 7, 8, 5, 6, 4]
    CountingSort(alist2, 9)

main()