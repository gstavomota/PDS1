/*
Neste exercício você deve fazer um programa para encontrar 
sequências de números iguais consecutivos, tanto na horizontal 
quanto na vertical, em uma matriz m x n. Depois, você deve 
substituir esses números por zeros e colocá-los nas primeiras 
inhas da matriz. Todo o programa será implementado a partir das 
questões a seguir.
*/
#include <stdio.h>
#include <stdlib.h>

void criaMatriz(int m, int n, int k){
    int matriz[m][n], num;

    for(int i = 0; i<m; i++){
        for(int j = 0; j < n; j++){
            matriz[i][j] = 0;
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    printf("\n");
    
    for(int i = 0; i<m; i++){
        for(int j = 0; j < n; j++){
            do{
                num = 1 + (rand()%10);
                matriz[i][j] = num;
            }while (num >= k);           
                printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
}

void main(){
    int m,n,k;

    do{
        scanf("%d %d %d", &m, &n, &k);
    }while(m > 100 || n > 100);

    criaMatriz(m, n, k);

}