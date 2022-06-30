#include <stdio.h>
#include <math.h>

unsigned long long fast_pow_2(int expoente){
    return pow(2,expoente);
}

void letraA(){
    int exp;
    printf("\nDigite o expoente: ");
    scanf("%d", &exp);

    
    printf("Resultado: %d", fast_pow_2(exp));
}

void lestraB(){
    int i = 1, j =0;
    unsigned long long armazena=0;

    while(i == 1){
        printf(" %llu -", fast_pow_2(j));
        if(fast_pow_2(j) == 0){
            printf ("Potencia: %d\nResultado: %llu", j-1, fast_pow_2(j-1));
            i = 0;
        }
        j++;
    }
}