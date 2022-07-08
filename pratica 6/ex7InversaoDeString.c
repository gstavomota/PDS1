/*
Escreva um programa para ler um texto do teclado e imprimir o inverso dele. Use o ponto final para 
indicar o término do texto, ou seja, o usuário deve terminar o texto sempre com um ponto final. 
Leia um caractere do texto por vez usando a função getc como a seguir:

char c = getc(stdin); 

*/
#include <stdio.h>
#include <string.h>
#define MAX_TAM 128
void inverteString(char string[], int size){
    
    char stringInversa[MAX_TAM];
    int j = size;

    for(int i = 0; i < size; i++){
        stringInversa[i] = string[j-1];
        j--;
    }
    printf("\ntexto inverso: %s",stringInversa);   
}

void main(){
    char texto[MAX_TAM], c;
    int i = 0, tamanho;
    printf("Digite um texto: (para finalizar digite ponto final)");
    do{
        c = getc(stdin);        
        texto[i] = c;
        i++;
    }while (c != '.');

    printf("\n texto: %s", texto);
    tamanho = strlen(texto)-1;
    inverteString(texto, tamanho);
    
}