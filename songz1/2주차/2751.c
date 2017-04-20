/*
 알고리즘 스터디_송지은
 2017.04.15.토
 C_2751번
 */

#include <stdio.h>
#include <stdlib.h>

void quickSort(int* arr, int left, int right);
void swap(int* a, int* b) {
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}

int main() {
	int n = 0;
	int* arr;

	scanf("%d", &n);

	arr = (int*) malloc(sizeof(int) * n);
	for (int i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
	}

	quickSort(arr, 0, n - 1);

	for (int i = 0; i < n; i++) {
		printf("%d\n", arr[i]);
	}

	free(arr);
	return 0;
}

void quickSort(int* arr, int left, int right) {
	if (left >= right)
		return;

	int low = left + 1;
	int high = right;
	int pivot = arr[left];

	while (low <= high) {
		while (pivot >= arr[low] && low <= right)
			low++;
		while (pivot <= arr[high] && high >= (left + 1))
			high--;

		if (low <= high)
			swap(&arr[low], &arr[high]);
	}

	swap(&arr[left], &arr[high]);

	quickSort(arr, left, high - 1);
	quickSort(arr, high + 1, right);

}

