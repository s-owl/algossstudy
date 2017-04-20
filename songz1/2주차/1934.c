/*
 알고리즘 스터디_송지은
 2017.04.16.일
 C_1934번
 */

#include <stdio.h>

void min(int a, int b) {
	int c, max = 1;

	if (a <= b) {
		c = a;
	} else
		c = b;

	// 최대공약수 구하기
	for (int i = c; i >= 1; i--) {
		if (a % i == 0 && b % i == 0) {
			max = i;
			break;
		}
	}

	// 최소공배수 출력
	printf("%d\n", a * b / max);
}

int main() {
	int t, a, b;

	scanf("%d", &t);

	for (int i = 0; i < t; i++) {
		scanf("%d %d", &a, &b);
		min(a, b);
	}

	return 0;
}
