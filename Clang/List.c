// clang List.c -o List

#include <stdio.h>

int main(void){

    int num;

    puts("配列の要素数。");
    scanf("%d", &num);

    int x[num];

    for(int i=0; i < num; i++){
        printf("x[%d]の値を入れる。", i);
        scanf("%d", &x[i]);
    }

    for(int i=0; i < num; i++){
        printf("x[%d] = %d\n", i, x[i]);
    }
    
    return 0;
}