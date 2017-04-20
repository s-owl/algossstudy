/*
 알고리즘 스터디_송지은
 2017.04.13.목
 C_2750번
 */

#include <stdio.h>
#include <stdlib.h>

int main() {
	int n = 0, temp = 0;
	int* arr;

	scanf("%d", &n);

	if (n >= 1 && n <= 1000) {
		arr = (int*) malloc(sizeof(int) * n);
		for (int i = 0; i < n; i++) {
			scanf("%d", &arr[i]);
		}

		for (int i = 0; i < n-1; i++) {
			for (int j = i + 1; j < n; j++) {
				if (arr[i] > arr[j]) {
					temp = arr[j];
					arr[j] = arr[i];
					arr[i] = temp;
				}
			}
		}

		// printf("\n");
		for (int i = 0; i < n; i++) {
			printf("%d\n", arr[i]);
		}
	}

	free(arr);
	return 0;
}

