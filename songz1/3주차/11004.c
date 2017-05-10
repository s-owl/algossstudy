/*
알고리즘 스터디_송지은
2017.04.29.토
C_11004번
*/

#include <stdio.h>
#include <stdlib.h>

void swap(int* a, int* b) {
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

void quickSort(int* a, int left, int right) {
	int pivot = left;
	int j = pivot, i = left + 1;

	if (left < right) {
		for (; i <= right; i++) {
			if (a[i] < a[pivot]) {
				j++;
				swap(&a[j], &a[i]);
			}
		}
		swap(&a[left], &a[j]);
		pivot = j;

		quickSort(a, left, pivot - 1);
		quickSort(a, pivot + 1, right);
	}
}

int main() {
	int n = 0, k = 0;
	int* a;
	int temp = 0;

	scanf("%d %d", &n, &k);
	a = (int*)malloc(sizeof(int)*n);
	for (int i = 0; i < n; i++)
		scanf("%d", &a[i]);

	quickSort(a, 0, n-1);
	printf("%d\n", a[k-1]);

	free(a);
	return 0;
}