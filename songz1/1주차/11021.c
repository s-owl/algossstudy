/*
알고리즘 스터디_송지은
2017.03.28.화
C_11021번
*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    int t=0;
    int a[2]={0};
    int* b;

    scanf("%d", &t);
    b = (int*)malloc(sizeof(int)*t);
    for(int i=0; i<t; i++){
        scanf("%d %d", &a[0], &a[1]);
        b[i] = a[0]+a[1];
    }

    for(int i=0; i<t; i++){
        printf("Case #%d: %d\n", i+1, b[i]);
    }

    return 0;
}
