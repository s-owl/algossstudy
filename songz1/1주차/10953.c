/*
 알고리즘 스터디_송지은
 2017.04.16.일
 C_10953번
 */

#include <stdio.h>

int main(){
	int n, a, b;
	char c;

	scanf("%d", &n);
	for(int i=0; i<n; i++){
		scanf("%d %c %d", &a, &c, &b);
		printf("%d\n", a+b);
	}

	return 0;
}
