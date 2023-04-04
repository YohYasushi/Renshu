// clang ZenGo.c -o ZenGo

#include <stdio.h>

int main(void){

    int n1 = 3;
    int n2 = 3;
    int n3, n4;

    n3 = ++n1;
    n4 = n2++;

    printf("n1 = %d\n", n1); //4
    printf("n2 = %d\n", n2); //4
    printf("n3 = %d\n", n3); //4
    printf("n4 = %d\n", n4); //3

    return 0;
}