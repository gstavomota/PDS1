/*
A sequência de Fibonacci pode ser definida como:

fib(0) = 1
fib(1) = 1
fib(n) = fib(n-1) + fib(n-2), para n>2

Implemente um programa que calcule a série de Fibonacci e 
armazene em um vetor cada elemento da série, de forma que a 
posição 0 armazene o termo 0, a posição 1 o termo 1, e assim 
por diante. Lembro que o termo 0 é o inteiro 1. Seu programa 
deve receber do usuário um número entre 0 e 1000 e imprimir o 
termo correspondente ao número recebido. O usuário deve ser 
capaz de entrar com vários números interativamente em uma mesma
 execução. O programa termina quando o usuário entrar com um 
 número negativo ou maior que 1000. Dica: se o tipo int for 
 insuficiente para armazenar todos os elementos da série, use 
 outro tipo de dados.
*/
#define MAX_TAM 1000

#include <stdio.h>

int fibonacci(int size){

    long int vetor[size], soma=0;
    vetor[0] = 0;
    for(int i =1; i<size; i++){
        vetor[i] = vetor[i]+vetor[i-1];
    }
    return soma;
}

void main(){
    int num=1;

    while(num < MAX_TAM && num > 0){
        scanf("%d",&num);
        printf("%d",fibonacci(num));
    }

}