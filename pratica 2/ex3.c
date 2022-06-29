#include <stdio.h>
#include <math.h>
#include "ex2Modulo.h"

#define PI 3.141592

void main(){

    double x, u, b, cauchy, gum, lp;
    int opcao;

    printf("\nSelecione a Funcao:\n1 - Caunchy padrao\n2 - Gumbel\n3 - Laplace\n");
    scanf("%d",&opcao);

    switch(opcao){
        case 1:
            cauchy = cauchyPadrao(-2);
            printf("\n%lf",cauchy);
            break;
        case 2:
            gum = gumbel(0, 0.5, 2);
            printf("\n%lf", gum);
            break;
        case 3: 
            lp = laplace(-6, -5, 4);
            printf("\n%lf", lp);
            break;
        default:
            printf("Opcao nao valida");
            break;
    }    
}