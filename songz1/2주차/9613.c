/*
알고리즘 스터디_송지은
2017.04.29.토
C_9613번
*/

#include <stdio.h>

int gcd(int a, int b) {
	int max = 0, c = 0;

	if (a <= b) {
		c = a;
	}
	else c = b;

	// 최대공약수 구하기
	for (int i = c; i >= 1; i--) {
		if (a%i == 0 && b%i == 0) {
			max = i;
			break;
		}
	}

	return max;
}

int main() {
	int t = 0, n = 0;

	scanf("%d", &t);

	for (int i = 0; i < t; i++) {
		int n2[100] = {0};
		int sum = 0;

		scanf("%d", &n);
		for (int j = 0; j < n; j++) 
			scanf("%d", &n2[j]);
		
		for (int i = 0; i < n - 1; i++){
			for (int j = i + 1; j < n; j++) {
				sum += gcd(n2[i], n2[j]);
			}
		}

		printf("%d\n", sum);
	}

	return 0;
}