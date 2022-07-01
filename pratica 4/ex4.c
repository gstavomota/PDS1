/*
Implementar uma função que recebe como parâmetro um número 
inteiro n e retorne 1 se ele for par e 0 caso ele seja ímpar.
Protótipo:
int ehPar(int n);
*/
#include <stdio.h>

int ehPar(int n){
    if (n%2 == 0)
        return 1;
    else 
        return 0;
}

void main(){
    int num;

    printf("Digite um numero: ");
    scanf("%d",&num);
    printf("\n%d", ehPar(num));
}