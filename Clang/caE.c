// clang -std=c11 caE.c -o excaE

#include <stdio.h>

int main(void)
{
    double e = 1.0;
    for(int i=0; 1.0 + e > 1.0; i++)
    {
        e /= 2.0;
        printf("i = %d ", i+1);
        printf("：");
        printf("e = %.80f\n", e);
    }
    return 0;
}
//イプシロンを求める。if文中にiがないところがある。