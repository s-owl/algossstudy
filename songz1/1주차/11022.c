/*
알고리즘 스터디_송지은
2017.03.28.화
C_11022번
*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    int t=0;
    int* a;
    int* b;

    scanf("%d", &t);
    b = (int*)malloc(sizeof(int)*t);
    a = (int*)malloc(sizeof(int)*t*2);
    for(int i=0; i<t; i++){
        scanf("%d %d", &a[(i*2)-1], &a[i*2]);
        b[i] = a[(i*2)-1]+a[i*2];
    }

    for(int i=0; i<t; i++){
        printf("Case #%d: %d + %d = %d\n", i+1, a[(i*2)-1], a[i*2], b[i]);
    }

    return 0;
}
