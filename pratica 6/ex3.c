/*
Faça um programa que lê um número inteiro N e imprime as N 
primeiras linhas do triângulo de Floyd:

1
2 3
4 5 6
7 8 9 10
11 12 13 14 15

*/

#include <stdio.h>
void quebraDeLinha(){
    printf("\n");
}

void main(){
    int num, soma=1, j;
    printf("Numero: ");
    scanf("%d", &num);

    for(int i = 1; i <= num; i++){
        for(j = 1; j <= i; j++){
            printf("%d ",soma);
            soma++;
        }
        quebraDeLinha();
    }
}