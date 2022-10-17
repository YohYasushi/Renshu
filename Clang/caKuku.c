// clang -std=c11 caKuku.c -o excaKuku

#include <stdio.h>

int main(void)
{
    for(int i = 1; i <=19; i++)
    {
        for(int j = 1; j <=19; j++)
        {
            printf("%4d", i * j);

        }
        putchar('\n');
    }
    return 0;
}