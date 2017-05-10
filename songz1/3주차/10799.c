/*
알고리즘 스터디_송지은
C_10799번
*/

#include <stdio.h>
#include <string.h>

int main() {
	char s[100000];
	int high = 0;
	int count = 0;

	scanf("%s", s);

	for (int i = 0; i < strlen(s); i++) {
		if (s[i] == '(')
			high++;
		else if (s[i] == ')') {
			high--;
			if (s[i - 1] == '(')
				count += high;
			else
				count++;
		}
	}

	printf("%d\n", count);

	return 0;
}