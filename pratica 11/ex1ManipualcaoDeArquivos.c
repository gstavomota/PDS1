/*
Você recebeu um arquivo cartelas.txt contendo 1 milhão de apostas 
feitas na mega-sena. Neste exercício, você deve verificar duas 
coisas. Primeiro, conte e imprima o número de cartelas que foram 
vencedoras. Os números sorteados foram: 6, 9, 22, 23, 48, 52. 
Depois, à título de curiosidade, você deve contar quantas pessoas 
apostaram nos números do seriado Lost, que são: 4, 8, 15, 16, 23, 42.
*/

#include <stdio.h>

int comparaVetor(int n1[], int n2[]){
    int j=0;
    for (int i=0; i<6; i++){

        if(n1[i] == n2[i]){
            j++;
        }
        if (j == 5){
            return 1;
        }
    }
    return 0;
}

int main(){

    int nSorteados[6] = {6, 9, 22, 23, 48, 52};
    int n[6], i=0, cv=0;;

    FILE *arq;
    arq = fopen("cartelas.txt","r");

    while (feof(arq) == 0){
        fscanf(arq, "%d", n[i]);
        i++;
        if(i == 6){
            i = 0;
            if (comparaVetor(n, nSorteados)){
                cv++;
            }
        }
    }
    printf("%d",cv);

    return 0;
}