/*
O valor de  (número de Euler) pode ser aproximado pelo somatório:

Implemente um programa para aproximar o valor de . Seu programa deve aumentar a precisão da a
proximação calculando iterativamente (isto é, num laço) os termos do somatório acima. Seu programa 
deve parar a aproximação quando o i-ésimo termo (1/i!) for menor do que .

Implemente esse programa fazendo uma função separada para calcular o fatorial de .

Número de Euler na Wikipedia.
*/
#include <stdio.h>
#include <math.h>

float fatorial(int num){
    int fat = 1;
    for(int i = 1; i <= num; i++ ){
        fat = i * fat;
    }
    
    return fat;
}

float fatorial_recursivo(int num) {
    if (num == 0) {
        return 1;
    }

    return fatorial_recursivo(num - 1) * num;
}


void main(){
    double c=1;
    int i = 1;

    while(fatorial(i) > pow(10,-6)){
        c = c + 1/(fatorial(i));
        i++;
        printf("%lf\n",c);
    }

    
}