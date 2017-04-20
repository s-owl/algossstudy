/*
 알고리즘 스터디_송지은
 2017.04.16.일
 C_10430번
 */

#include <stdio.h>

int main(){
	int a, b, c;

	scanf("%d %d %d", &a, &b, &c);

	printf("%d\n", (a+b)%c);
	printf("%d\n", (a%c+b%c)%c);
	printf("%d\n", (a*b)%c);
	printf("%d\n", (a%c*b%c)%c);

	return 0;
}

