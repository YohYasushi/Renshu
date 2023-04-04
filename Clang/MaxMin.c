// clang MaxMin.c -o MaxMin

#include <stdio.h>

int main(void){

    int max,min, num;

    puts("配列のy要素数。");
    scanf("%d", &num);
    int list[num];

    for(int i=0; i<num; i++){
        printf("%d番目", i);
        scanf("%d", &list[i]);
    }

    min = max = list[0];

    for(int i=0; i<num; i++){
        if(list[i] > max) max = list[i];
        if(list[i] < min) min = list[i];
    }

    printf("最大値は、%d。最低値は、%d", max, min);


    return 0;
}