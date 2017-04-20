/*
 알고리즘 스터디_송지은
 2017.04.09.일
 C_10989번
 */

#include <stdio.h>
#include <stdlib.h>

int main() {
	int n = 0;
	int* arr;
	int temp;

	scanf("%d", &n);
	arr = (int*) malloc(sizeof(int) * n);

	for (int i = 0; i < n; i++)
		scanf("%d", &arr[i]);

	for (int i = 0; i < n-1; i++) {
		for (int j = i + 1; j < n; j++) {
			if (arr[i] > arr[j]) {
				temp = arr[j];
				arr[j] = arr[i];
				arr[i] = temp;
			}
		}
	}

	for (int j = 0; j < n; j++)
		printf("%d\n", arr[j]);

	free(arr);
	return 0;
}
