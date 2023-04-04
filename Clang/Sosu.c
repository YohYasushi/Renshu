// clang Sosu.c -o Sosu

#include <stdio.h>

int isprime(int N){
    for(int i=3; i*i<=N; i+=2){
        if(N % i == 0){
            return 0;
        }
    }
    return 1;
}
//素数なら1を素数でなければ0を返す。



int main(void){

    int N;
    scanf("%d", &N);

    for(int i = 3; i<=N; i+=2){
        if (isprime(i) == 1){
            printf("%d ", i);
        }
    }

    printf("\n");
    return 0;
}

//Nまでの素数を列挙するCode。