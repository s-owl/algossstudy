/*
알고리즘 스터디_송지은
C_11651번
*/

#include <stdio.h>

struct xy {
	int x;
	int y;
}typedef xy;

int compare(xy* first, xy* second);

int main() {
	int n, x, y;
	xy* n2;

	scanf("%d", &n);
	n2 = (xy*)malloc(sizeof(xy)*n);

	for (int i = 0; i < n; i++) {
		scanf("%d %d", &x, &y);
		n2[i].x = x;
		n2[i].y = y;
	}

	qsort(n2, n, sizeof(xy), compare);

	for (int i = 0; i < n; i++) {
		printf("%d %d\n", n2[i].x, n2[i].y);
	}

	free(n2);
	return 0;
}

int compare(xy* first, xy* second) {
	if (first->y > second->y)
		return 1;
	else if (first->y == second->y) {
		if (first->x > second->x)
			return 1;
		else if (first->x < second->x)
			return -1;
		else
			return 0;
	}
	else return -1;
}
