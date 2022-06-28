#include <stdio.h>
#include <math.h>

#define PI 3.141592

double cauchyPadrao(double x){
    return 1/(PI*(1+(pow(x,2))));
}

double gumbel(double x, double u, double b){
    double z = (x-u)/b;
    return (1/b)*exp(-(z+exp(-z)));
}

double laplace(double x, double u, double b){
    return (1/2*b)*exp(-fabs(x-u)/b);
}

void main(){

    double x, u, b, cauchy, gum, lp;
    int opcao;

    printf("\nSelecione a Funcao:\n1 - Caunchy padrao\n2 - Gumbel\n3 - Laplace\n");
    scanf("%d",&opcao);

    switch(opcao){
        case 1:
            printf("valor de x: \n");
            scanf("%lf",&x);
            cauchy = cauchyPadrao(x);
            printf("\n%lf",cauchy);
            break;
        case 2:
            printf("valor de x: \n");
            scanf("%lf",&x);
            printf("valor de u: \n");
            scanf("%lf",&u);
            printf("valor de b: \n");
            scanf("%lf",&b);
            gum = gumbel(x, u, b);
            printf("\n%lf", gum);
            break;
        case 3: 
             printf("valor de x: \n");
            scanf("%lf",&x);
            printf("valor de u: \n");
            scanf("%lf",&u);
            printf("valor de b: \n");
            scanf("%lf",&b);
            lp = laplace(x, u, b);
            printf("\n%lf", lp);
            break;
        default:
            printf("Opcao nao valida");
            break;
    }    
}