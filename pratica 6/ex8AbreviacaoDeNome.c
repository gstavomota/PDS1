/*
Escreva um programa para ler um nome completo do teclado terminado com um ponto final (‘.’). 
Seu programa deve imprimir o mesmo na forma abreviada. Exemplo: o nome “Pedro Olmo Stancioli Vaz de Melo.”
deve ser abreviado para “P.O.S.V.M.”. Note que o processo de abreviação deve ignorar palavras que começam 
com caracteres minúsculos. Considere que o usuário irá inserir apenas nomes válidos, sempre irá terminar 
o nome com o caractere ‘.’ e o nome não conterá acentos.
*/
#include <stdio.h>
#include <string.h>
#define MAX_TAM 128

int main(){
    char nome[MAX_TAM], c;
    char nomeAbrev[MAX_TAM];
    int tamanho, j=0, k=0;

    do{
        c = getc(stdin);        
        nome[k] = c;
        k++;
    }while (c != '.');

    tamanho = strlen(nome);
    

    for(int i = 0; i < tamanho; i++){
        if (nome[i] >= 65 && nome[i] <= 90){
            nomeAbrev[j] = nome[i];
            nomeAbrev[j+1] = '.';
            j = j+2;
        }
    }

    printf("nome: %s\nnomeArev: %s",nome,nomeAbrev);
}