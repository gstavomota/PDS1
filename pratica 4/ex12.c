/*
Implementar uma função que recebe como parâmetro um número inteiro N e retorne o seu número de 
divisores. Exemplo: os divisores de 66 são 8: 1,2,3,6,11,22,33,66. Protótipo:
int numeroDivisores(int N);
*/
#include <stdio.h>

void numeroDivisores(int n){
    printf("teste");
    int i=1, j=1;
    while(i==1){
        if (n%j==0){
            printf("%d,",j);
        }
        j++;
        if (j > n)
            i = 0;
    }
}

void main(){
    int num;
    scanf("%d",&num);

    numeroDivisores(num);

}