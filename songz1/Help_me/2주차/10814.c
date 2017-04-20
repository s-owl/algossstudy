/*
 알고리즘 스터디_송지은
 2017.04.18.화
 C_10814번
 */

#include <stdio.h>

struct person {
	int num;
	int age;
	char name[100];
};

void sort(struct person* p, int n) {
	struct person temp;

	for (int i = 0; i < n - 1; i++) {
		for (int j = i + 1; j < n; j++) {
			if (p[i].age > p[j].age) {
				temp = p[i];
				p[i] = p[j];
				p[j] = temp;
			} else if (p[i].age == p[j].age) {
				if (p[i].num > p[j].num) {
					temp = p[i];
					p[i] = p[j];
					p[j] = temp;
				}
			}
		}
	}
}

int main() {
	int n;

	scanf("%d", &n);
	struct person p[n];

	for (int i = 0; i < n; i++) {
		p[i].num = i;
		scanf("%d %s", &p[i].age, &p[i].name);
	}

	sort(p, n);

	for (int i = 0; i < n; i++)
		printf("%d %s\n", p[i].age, p[i].name);

	return 0;
}
