/*
알고리즘 스터디_송지은
C_1181번
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct String {
	int len;
	char str[51];
}typedef String;

int compare(String* first, String* second);

int main() {
	int n = 0, k;
	String* p;

	scanf("%d", &n);
	p = (String*)malloc(sizeof(String)*n);

	for (int i = 0; i < n; i++) {
		scanf("%s", p[i].str);
		p[i].len = strlen(p[i].str);
	}
	
	qsort(p, n, sizeof(String), compare);

	for (int i = 0; i < n; i++) {
		if (!strcmp(p[i].str, p[i + 1].str))
			continue;
		else
			printf("%s\n", p[i].str);
	}

	free(p);
	return 0;
}

int compare(String* first, String* second) {
	if (first->len > second->len)
		return 1;
	else if (first->len == second->len) {
		if (strcmp(first->str, second->str) > 0)
			return 1;
		else if (strcmp(first->str, second->str) < 0)
			return -1;
		else
			return 0;
	}
	else return -1;
}