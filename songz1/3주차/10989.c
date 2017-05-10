/*
알고리즘 스터디_송지은
C_10989번
*/

#include <stdio.h>

int main() {
	int n = 0, k = 0;
	int arr[10001] = {0};

	scanf("%d", &n);

	for (int i = 0; i < n; i++) {
		scanf("%d", &k);
		arr[k]++;
	}

	for (int j = 0; j < 10001; j++) 
		if (arr[j] != 0) {
			for (int i = 0; i < arr[j]; i++)
				printf("%d\n", j);
		}

	return 0;
}
