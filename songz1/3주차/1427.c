/*
알고리즘 스터디_송지은
C_1427번
*/

#include <stdio.h>

int main() {
	int n[10] = {0};
	int n2 = 0, a = 0, temp = 0, b = 0;
	
	scanf("%d", &n2);

	for (int i = 0; i < 10; i++) {
		n[i] = n2 - (n2 / 10) * 10;
		n2 = n2 / 10;
		if (n2 == 0) {
			a = i;
			break;
		}
	}

	for (int i = 0; i < a; i++) {
		for (int j = i+1; j < a+1; j++) {
			if (n[i] < n[j]) {
				temp = n[j];
				n[j] = n[i];
				n[i] = temp;
			}
		}
	}

	for (int i = 0; i < a + 1; i++) {
		b = (b * 10) + n[i];
	}
	printf("%d", b);

	return 0;
}