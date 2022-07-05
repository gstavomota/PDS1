/*
Implemente uma função que recebe como parâmetro a altura  em metros (exemplo: ) e o 
sexo ('M' para masculino e 'F' para feminino) de uma pessoa e retorne o seu peso ideal , 
sendo que  caso o sexo seja masculino e  caso feminino. Protótipo:
float pesoIdeal(float h, char sexo);
*/

#include <stdio.h>

float pesoIdeal(float h, char sexo){
    if (sexo == 'M')
        return (72.7*h)-58;
    else if (sexo == 'F')
        return (62.1*h)-44.7;
    else 
        return 0;
}




void main(){
    float altura;
    char sexo;
    printf ("altura e sexo ('M' ou 'F'): ");
    scanf("%f %c", &altura, &sexo);
    printf("%f",pesoIdeal(altura, sexo));

}