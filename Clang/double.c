// clang double.c -o double.exe

#include <stdio.h>

int main(void){

    double x06;
    double x07;
    double x08; 
    double x09;
    double x10;

    x06 = 9.99999;
    x07 = 9.999999;
    x08 = 9.9999999;
    x09 = 9.99999999;
    x10 = 9.999999999;

    printf("9.99999 = %lf\n", x06);
    printf("9.999999 = %lf\n", x07);
    printf("9.9999999 = %lf\n", x08);
    printf("9.99999999 = %lf\n", x09);
    printf("9.999999999 = %lf\n", x10);    

    return 0;
}

//精度がわかる