/*
Faça um programa que leia um string e modifique todos os 
caracteres minúsculos por caracteres maiúsculos.

Dica: os caracteres minúsculos tem o código ASCII entre 97 
e 122 e os caracteres maiúsculos tem o código ASCII entre 65 
e 90.
*/

#include <stdio.h>
#include <ctype.h>

#define MAX_TAM 128

void minParaMaiusculo(char c[]){
    int i = 0;
    while(c[i] != '\0'){
        if(c[i] >= 97 && c[i] < 122){
            c[i] = toupper(c[i]);
        }
        i++;
    }
}

void main(){
    char teste[MAX_TAM];

    printf("Frase: ");
    fgets(teste, MAX_TAM, stdin);

    minParaMaiusculo(teste);
    printf("\nFrase em maiusculo: %s",teste);

}