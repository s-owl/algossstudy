/*
 알고리즘 스터디_송지은
 2017.04.18.화
 C_10828번
 */

#include <stdio.h>
#include <string.h>

int index = -1;
int stack[10000];

void push(int x){
	index = index+1;
	stack[index] = x;
}
void pop(){
	if(index == -1){
		printf("-1\n");
	}
	else{
		printf("%d\n", stack[index]);
		index = index-1;
	}
}
void size(){
	printf("%d\n", index+1);
}
void empty(){
	if(index == -1){
		printf("1\n");
	}
	else
		printf("0\n");
}
void top(){
	if(index == -1){
		printf("-1\n");
	}
	else{
		printf("%d\n", stack[index]);
	}
}

int main() {
	int n, x;
	char str[10];

	scanf("%d", &n);
	getchar();

	for (int i = 0; i < n; i++) {
		scanf("%s", str);

		if (!strcmp("push", str)) {
			scanf("%d", &x);
			push(x);
		} else if (!strcmp("pop", str)) {
			pop();
		} else if (!strcmp("top", str)) {
			top();
		} else if (!strcmp("size", str)) {
			size();
		} else if (!strcmp("empty", str)) {
			empty();
		}
	}

	return 0;
}
