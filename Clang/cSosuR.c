// clang -std=c11 cSosuR.c -o excSosuR -lm

#include <stdio.h>
#include <math.h>


int prnum(int n)
{
    int j =0;
    for(int i = 1; i <= sqrt(n); i++){
        if(n % i == 0){
            j++;}
    }

    return j;
    
}

int main(void)
{
    int n;
    printf("nを入力: "); scanf("%d", &n);
    printf("素数判定をする。1なら素数。\n");
    printf("判定 = %d\n", prnum(n));
    return 0;
}
