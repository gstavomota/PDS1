/*
O conceito de um aluno é calculado a partir de sua nota, 
seguindo a tabela abaixo. Faça um programa que lê a nota de 
um aluno do teclado e imprime seu conceito. Assuma que alunos 
só podem receber notas inteiras (isto é, sem decimais). Você 
deve usar o comando switch para verificar a nota lida.

Nota
Conceito
0 a 4 | F
5     | E
6     | D
7     | C
8     | B
9+    | A
*/

#include <stdio.h>

void main(){
    int nota, condicao=2;
    while(condicao == 2){
        printf("\nNota do Aluno: ");
        scanf("%d",&nota);

        switch(nota){

            case 0:
            printf("Conceito: F");
            break;
        
            case 1:
            printf("Conceito: F");
            break;
        
            case 2:
            printf("Conceito: F");
            break;
        
            case 3:
            printf("Conceito: F");
            break;
        
            case 4:
            printf("Conceito: F");
            break;       
        
            case 5:
            printf("Conceito: E");
            break;
        
            case 6:
            printf("Conceito: D");
            break;

            case 7:
            printf("Conceito: C");
            break;

            case 8:
            printf("Conceito: B");
            break;

            case 22:
            condicao = 1;
            break;

            default:
            printf("Conceito: A");
        }
        printf("\nDigite 22 para sair");
    }
}