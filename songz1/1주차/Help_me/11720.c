/*
알고리즘 스터디_송지은
2017.03.29.수
C_11720번
*/

#include <stdio.h>
#include <stdlib.h>

int main(){
	int n=0;
	int* n2;
	int sum=0;
	char num[100];  // ..길이....

	scanf("%d", &n);
	n2 = (int*)malloc(sizeof(int)*n);

	/*
	for(int i=0; i<sizeof(n2); i++){
		num[i] = getchar();
		printf("%c",num[i]);
	}
	for(int i=0; i<sizeof(n2); i++){
		n2[i] = (int)num[i];
		sum += n2[i];
	}
	짜증날날ㄴ아ㅣ러다ㅏㅣㅋ아리ㅏㄴ어*/

	printf("%d", sum);
    return 0;
}
