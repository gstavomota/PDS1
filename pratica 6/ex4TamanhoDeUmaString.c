/*
Implemente um programa que leia um string e conte o número 
de caracteres. Não use a função strlen. Para ler uma string 
de até 127 caracteres do teclado, use o seguinte código:

char linha[128];
printf("digite uma linha:\n");
fgets(linha, 128, stdin);
*/
#include <stdio.h>

int contaCaracter(char c[]){
    int i=0, soma =0;
    while(c[i] != '\0'){
        printf("\n%c",c[i]);
        i++;
    }
    return i;
}
void main(){

    char linha[128];

    printf("digite uma linha:\n");
    fgets(linha, 128, stdin);

    printf("\nQuantidade: %d",contaCaracter(linha));

}
