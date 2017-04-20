/*
알고리즘 스터디_송지은
2017.03.29.수
C_11721번
*/

#include <stdio.h>

int main(){
	char str[100];
	int i=0;

	scanf("%s", str);
	while(str[i] != NULL){
		printf("%c", str[i]);
		i++;
		if(i%10 == 0){
			printf("\n");
		}
	}
    return 0;
}
