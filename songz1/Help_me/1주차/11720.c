/*
 알고리즘 스터디_송지은
 2017.04.18.화
 C_11720번
 */

#include <stdio.h>

int main(){
	int n=0;
	int result=0;
	char str[100];

	scanf("%d", &n);
	for(int i=0; i<n; i++){
		str[i] = getchar();
		fflush(stdin);
		result += (int)str[i];
	}

	printf("%d", result);

    return 0;
}

