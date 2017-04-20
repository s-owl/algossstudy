/*
 알고리즘 스터디_송지은
 2017.04.16.일
 C_11650번
 */

#include <stdio.h>

void temp(int* a, int* b) {
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}

void sort(int** n2, int n) {
	for (int i = 0; i < n - 1; i++) {
		for (int j = i + 1; j < n; j++) {
			if (n2[i][0] > n2[j][0]) {
				temp(&n2[i][0], &n2[j][0]);
				temp(&n2[i][1], &n2[j][1]);
			} else if (n2[i][0] == n2[j][0]) {
				if (n2[i][1] > n2[j][1]) {
					temp(&n2[i][0], &n2[j][0]);
					temp(&n2[i][1], &n2[j][1]);
				}
			}
		}
	}
}

int main() {
	int n, x, y;
	int** n2;

	scanf("%d", &n);
	n2 = (int**) malloc(sizeof(int*) * n);
	for (int i = 0; i < n; i++)
		n2[i] = (int*) malloc(sizeof(int) * 2);

	for (int i = 0; i < n; i++) {
		scanf("%d %d", &x, &y);
		n2[i][0] = x;
		n2[i][1] = y;
	}

	sort(n2, n);

	for (int i = 0; i < n; i++) {
		printf("%d %d\n", n2[i][0], n2[i][1]);
	}

	for (int i = 0; i < n; i++)
		free(n2[i]);
	free(n2);

	return 0;
}
