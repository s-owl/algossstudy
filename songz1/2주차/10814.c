/*
알고리즘 스터디_송지은
C_10814번
*/

#include <stdio.h>
#include <stdlib.h>

struct Person {
	int join;
	int age;
	char name[101];
}typedef Person;

int compare(Person* first, Person* second);

int main() {
	int n;
	Person* p;

	scanf("%d", &n);
	p = (Person*)malloc(sizeof(Person)*n);

	for (int i = 0; i < n; i++) {
		scanf("%d %s", &p[i].age, &p[i].name);
		p[i].join = i;
	}

	qsort(p, n, sizeof(Person), compare);

	for (int i = 0; i < n; i++)
		printf("%d %s\n", p[i].age, p[i].name);

	free(p);
	return 0;
}

int compare(Person* first, Person* second) {
	if (first->age > second->age)
		return 1;
	else if (first->age == second->age) {
		if (first->join > second->join)
			return 1;
		else if (first->join < second->join)
			return -1;
		else
			return 0;
	}
	else return -1;
}
