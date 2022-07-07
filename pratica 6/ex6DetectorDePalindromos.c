/*
Implemente código C para testar se uma string é um palíndromo. 
Um palíndromo é uma palavra idêntica quando lida de trás para 
frente, como "arara", "radar" e "reviver".
*/
#include <stdio.h>
#include <string.h>

#define MAX_TAM 128

int ehPalindromo(char str[], int size){
    for(int i = 0; i < size / 2; i++){
        if(str[i] != str[size - i -1])  
            return 0;
    return 1;
    }
}

int main(){
    char palavra[MAX_TAM];
    int tamanho;
    fgets(palavra, MAX_TAM, stdin);

    tamanho = strlen(palavra);
    if(ehPalindromo(palavra, tamanho-1))
        printf("eh palindromo");
    else 
        printf("nao eh palindromo");

    return 0;
}