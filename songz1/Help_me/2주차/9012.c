/*
 알고리즘 스터디_송지은
 2017.04.18.화
 C_9012번
 */

#include <stdio.h>
#include <string.h>

int main(){
	char c, n;
	int index=0;
	char str;

	scanf("%d", &n);
	fflush(stdin);

	for(int i=0; i<n; i++){
		while((str = getchar()) != '\n'){
			if(str == '('){
				index++;
			}
			else if(str == ')'){
				index--;
			}
		}
		if(index == 0){
			printf("YES\n");
		}
		else{
			printf("NO\n");
		}
	}

	return 0;
}
