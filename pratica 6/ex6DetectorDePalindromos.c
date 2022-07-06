/*
Implemente código C para testar se uma string é um palíndromo. 
Um palíndromo é uma palavra idêntica quando lida de trás para 
frente, como "arara", "radar" e "reviver".
*/
#include <stdio.h>
#include <string.h>

#define MAX_TAM 128
char ehPalindromo(char string[], int tamanho){
    char stringContrario[tamanho];
    int j = 0, iguais;

    for(int i = tamanho-1; i >= 0; i--){
        stringContrario[j] = string[i];
        j++;
    }
    iguais = strcmp(string, stringContrario);
    printf("\n%d",iguais);
    
    if (iguais == 0)
        return 'S';
    else    
        return 'N';
}

void main(){
    char palindromo[MAX_TAM];
    int tamanhoString;

    printf("Palavra: ");
    fgets(palindromo, MAX_TAM, stdin);

    tamanhoString = strlen(palindromo);
    printf("%d", tamanhoString);

    printf("A palavra eh palindromo? %c",ehPalindromo(palindromo, tamanhoString));
}