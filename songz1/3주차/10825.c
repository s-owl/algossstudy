/*
알고리즘 스터디_송지은
C_10825번
*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct _grade {
	char name[20];
	int math;
	int eng;
	int kor;
}grade;

int compare(grade* first, grade* second);

int main(void){
	int n = 0;
	grade* arr;

	scanf("%d", &n);
	arr = (grade*)malloc(sizeof(grade)*n);

	for (int i = 0; i < n; i++) 
		scanf("%s %d %d %d", &arr[i].name, &arr[i].kor, &arr[i].eng, &arr[i].math);

	qsort(arr, n, sizeof(grade), compare);

	for (int i = 0; i < n; i++) {
		printf("%s\n", arr[i].name);
	}

	free(arr);
	return 0;
}

int compare(grade* first, grade* second){
	if (first->kor < second->kor)
		return 1;
	else if (first->kor == second->kor) {
		if (first->eng == second->eng) {
			if (first->math == second->math) {
				if (strcmp(first->name, second->name) > 0)
					return 1;
				else if (strcmp(first->name, second->name) < 0)
					return -1;
				else
					return 0;
			}
			else if (first->math < second->math)
				return 1;
			else
				return -1;
		}
		else if (first->eng > second->eng)
			return 1;
		else
			return -1;
	}
	else return -1;
}