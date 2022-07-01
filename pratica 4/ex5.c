/*
Implementar uma função que recebe como parâmetro um número 
inteiro n e retorne 1 se ele for divisível por 3 ou por 5, 
mas não simultaneamente pelos dois, ou 0 caso contrário 
(divisível por 3 e 5 ou por nenhum dos dois). Protótipo:
int ehDivisivelPor3ou5(int n);
*/

#include <stdio.h>

int ehDivisivelPor3ou5(int n){
    if ((n%3 == 0 || n%5 == 0) && !(n%3 == 0 && n%5 == 0) )
        return 1;
    else if((n%3 == 0 && n%5 == 0) || !(n%3 == 0 && n%5 == 0))
        return 0;
}

void main(){
    int num;

    printf("Digite um numero: ");
    scanf("%d",&num);
    printf("\n%d", ehDivisivelPor3ou5(num));
}