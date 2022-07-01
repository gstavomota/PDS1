#include <stdio.h>

int maior(int n1, int n2, int n3){
    if (n1>n2 && n1>n3)
        return n1;
    else if (n2>n1 && n2>n3)
        return n2;
    else if (n3>n1 && n3>n2)
        return n3;
    else 
        printf("\nHa numeros iguais");
        return 0;
}

void main(){
    int n1, n2, n3;

    printf("Digite tres numeros inteiros diferentes: ");
    scanf("%d %d %d",&n1, &n2, &n3);

    printf("\nO maior numero eh: %d",maior(n1 , n2, n3));
}