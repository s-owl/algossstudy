/*
알고리즘 스터디_송지은
C_9012번
*/

#include <stdio.h>

int main() {
	int t = 0;

	scanf("%d", &t);

	for (int i = 0; i < t; i++) {
		char c2[51];
		int num = 0, j = 0, k = 0;

		scanf("%s", c2);

		while (c2[j] != NULL) {
			if (c2[j] == ')' && j != 0) {
				num--;
				k = -1;
			}
			else if (c2[j] == ')' && j == 0) {
				num = -1;
				break;
			}
			else if (c2[j] == '(') {
				num++;
				k = 1;
			}
			j++;
		}

		if (num == 0 && k == -1)
			printf("YES\n");
		else
			printf("NO\n");
	}

	return 0;
}
