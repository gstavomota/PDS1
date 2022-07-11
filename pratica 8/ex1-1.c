/*
Neste exercício você deve fazer um programa para encontrar 
sequências de números iguais consecutivos, tanto na horizontal 
quanto na vertical, em uma matriz m x n. Depois, você deve 
substituir esses números por zeros e colocá-los nas primeiras 
inhas da matriz. Todo o programa será implementado a partir das 
questões a seguir.

1.1) Faça um programa para preencher uma matriz m x n com números aleatórios entre 1 e k. Os valores de m, n e k devem ser lidos do teclado. Como ainda não aprendemos alocação dinâmica de memória, crie uma matriz estaticamente com os limites superiores de m e n. Considere que m e n não podem ser maiores que 100. Não permita que o usuário entre com valores inválidos para m, n e k.
Exemplo de uma matriz para m=5, n=4 e k=3:

3 3 3 2
3 2 2 3
1 1 1 1
2 1 2 1
2 3 3 1

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