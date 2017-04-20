/*
 알고리즘 스터디_송지은
 2017.04.16.일
 C_2609번
 */

#include <stdio.h>

int main(){
	int a, b;
	int c, max=1, min=1;

	scanf("%d %d", &a, &b);
	if(a<=b){
		c = a;
	}else c = b;

	// 최대공약수 구하기
	for(int i=c; i>=1; i--){
		if(a%i==0 && b%i==0){
			max = i;
			break;
		}
	}

	// 최소공배수 구하기
	min = a*b/max;

	// 출력
	printf("%d\n%d", max, min);

	return 0;
}
