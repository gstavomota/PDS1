/*
Neste exercício, você deve criar um protótipo de um sistema de 
batalha entre guerreiros de um jogo. Para isso, implemente os 
itens a seguir em um módulo separado chamado jogo.

1.1. Defina um novo tipo de dados chamado Guerreiro com os 
seguintes campos: ataque (inteiro), defesa (inteiro), 
carisma (inteiro), pontos_vida (inteiro) e id_guerreiro (inteiro)

1.2.  Escreva uma função de nome rolaDados que simula a rolagem 
de três dados de seis faces tradicionais (1 a 6) e retorna a soma 
dessas rolagens. Note que somar os valores resultantes da rolagem 
de três dados de seis faces é diferente de rolar um dado que 
retorna um número entre 3 e 18.

1.3. Escreva um procedimento de nome criaGuerreiro que recebe um 
Guerreiro por passagem de parâmetro por referência e que atribui 
valores aos seus campos de batalha:  ataque, carisma e defesa, 
nessa ordem. Os seus campos de batalha devem receber um valor 
inteiro da função rolaDados. Depois, atribua um valor para o 
campo pontos_vida, que  deve receber a soma dos valores retornados
por três execuções da função rolaDados. Assuma que o campo 
id_guerreiro já foi preenchido fora da função.
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//[1] Criação do tipo de dado Guerreiro e seus Campos
typedef struct {
    int ataque;
    int defesa;
    int carisma;
    int pontos_vida;
    int id_guerreiro;
    }Guerreiro;

//[2] Criação da função que simula a rolagem de 3 dados de 6 faces (1 a 6) e retorna a soma dessas rolagens.
int rolaDados(){
    int dados[3], soma=0;
    for(int i=0; i<3; i++){      
        dados[i] = 1+(rand()%6);
        soma += dados[i];
    }
    return soma;
}

//[3] Criação de um Procedimento criaGuerreiro(Guerreiro)
void criaGuerreiro(Guerreiro *p, int id){
    p->ataque = rolaDados();
    printf("\nAtaque: %d",p->ataque);
    p->carisma = rolaDados();
    printf("\nCarisma: %d",p->carisma);
    p->defesa = rolaDados();
    printf("\nDefesa: %d",p->defesa);
    p->pontos_vida = rolaDados()+rolaDados()+rolaDados();
    printf("\nPontos de Vida: %d",p->pontos_vida);
    p->id_guerreiro = id;
    printf("\nID: %d",p->id_guerreiro);
}

void main(){
    srand(time(NULL));
    Guerreiro j1,j2;
    criaGuerreiro(&j1, 1);
    criaGuerreiro(&j2, 2);
}