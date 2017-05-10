/*
알고리즘 스터디_송지은
C_11652번
*/

#include <stdio.h>
#include <stdlib.h>

int compare(long long* first, long long* second);

long long find(long long* arr, int n) {
	int count = 1, count2 = 1;
	long long result = arr[0];

	for (int i = 1; i < n; i++) {
		if (arr[i] == arr[i - 1])
			count++;
		else 
			count = 1;
		
		if (count2 < count) {
			count2 = count;
			result = arr[i];
		}
	}
	
	return result;
}

int main() {
	int n = 0;
	long long* arr;

	scanf("%d", &n);
	arr = (long long*)malloc(sizeof(long long)*n);

	for (int i = 0; i < n; i++) 
		scanf("%lld", &arr[i]);
	
	qsort(arr, n, sizeof(long long), compare);
	
	printf("%lld\n", find(arr, n));

	free(arr);
	return 0;
}

int compare(long long* first, long long* second) {
	if (*first > *second)
		return 1;
	else if (*first == *second)
		return 0;
	else return -1;
}