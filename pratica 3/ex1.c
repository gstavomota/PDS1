#include <stdio.h>
#include <math.h>

float recebeFlutuante(){
    double num;

    printf("\nNumero flutuante: ");
    scanf("%lf",&num);
    return num;
}

double parteInteira(int numero){
    return numero; 
}

double parteFracionaria(double numero){
    double resultado;

    if (numero < 10)
        return fmod(numero,1);
    else if(numero < 100 && numero > 10)
        return fmod(fmod(numero,10),1);
    else if(numero < 1000 && numero > 100)
        return fmod(fmod(fmod(numero,10),1),100);
    else 
        return 0;
}

double divInteiros(int num1, int num2){
    return num1/num2;
}

int main(){
    double funcao;
    char opcao;
    int n1, n2;

    printf("\nExercicio A, B, C ou D? ");
    scanf("%s", &opcao);

    switch(opcao){
        case 'A':
            funcao = parteInteira(recebeFlutuante());
            printf("%lf", funcao);
            break;
 
        case 'B':
            funcao = parteFracionaria(recebeFlutuante());
            printf("%lf", funcao);
            break;

        case 'C':
            printf("\nDois numeros inteiros: ");
            scanf("%d", &n1);
            scanf("%d", &n2);
            funcao = divInteiros(n1, n2);
            printf("%lf", funcao);
    }
    return 0;
}