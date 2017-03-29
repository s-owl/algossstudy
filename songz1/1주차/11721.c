/*
알고리즘 스터디_송지은
2017.03.29.수
C_11721번
*/

#include <stdio.h>
#include <string.h>

int main(){
	char str[100];

	fgets(str, sizeof(str), stdin);
	str[strlen(str)-1] = '\0';

	for(int i=0; 1==1; i++){
		if(str[i]==NULL)
			break;

		if(i!=0 && i%10==0)
			printf("\n");

		printf("%c", str[i]);
	}

    return 0;
}
