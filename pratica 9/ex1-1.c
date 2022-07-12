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

1.4. Escreva uma função de nome bonusCarisma que recebe um valor de carisma como parâmetro e retorna o bônus dado por esse valor de carisma. A tabela de bônus funciona da seguinte maneira:
Carisma 18: o guerreiro é extremamente carismático e tem todo o apoio da torcida, recebendo um bônus de +3.
Carisma 16 e 17:  o guerreiro é muito carismático e tem o apoio de quase toda a torcida, recebendo um bônus de +2.
Carisma 14 e 15:  o guerreiro é carismático e tem o apoio de alguns torcedores, recebendo um bônus de +1.
Carisma 6 e 7:  o guerreiro é antipático, e tem alguma torcida contra ele, recebendo uma penalidade de -1.
Carisma 4 e 5:  o guerreiro é muito antipático, e tem quase toda a torcida contra ele, recebendo uma penalidade de -2.
Carisma 3:  o guerreiro é extremamente antipático, e tem toda a torcida contra ele, recebendo uma penalidade de -3.
Para qualquer outro valor de carisma, a sua função deve retornar 0.

1.5. Escreva um procedimento de nome ataca que recebe dois Guerreiros por passagem de parâmetro por referência e simula um ataque do primeiro guerreiro no segundo. O ataque é dado da seguinte maneira:
O primeiro guerreiro rola três dados e soma os seus valores com o seu campo ataque e com o seu bônus de carisma. Essa soma é o valor do golpe do primeiro guerreiro.
O segundo guerreiro rola três dados e soma os seus valores com o seu campo defesa e com o seu bônus de carisma. Essa soma é o valor do escudo do segundo guerreiro. 
Faça dano = golpe - escudo. Se o dano for maior que zero, subtraia dano dos pontos_vida do segundo guerreiro. Ao subtrair o dano, considere que o campo pontos_vida não pode ter valores menores que zero. 

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

//[4] Criação da função bonusCarisma recebe um valor de carisma como parâmetro e retorna o bônus dado por esse valor de carisma.
int bonusCarisma(int carisma){
    if(carisma == 18)
        return 3;
    else if(carisma > 15 && carisma < 18)
        return 2;
    else if(carisma > 13 && carisma < 16)
        return 1;
    else if(carisma > 5 && carisma < 8)
        return -1;
    else if(carisma > 3 && carisma < 6)
        return -2;
    else if(carisma == 3)
        return -3;
    else 
        return 0;
}

//[5] Criação de uma função ataca que recebe dois guerreiros e simula um ataque entre o primeiro e o segundo.
void ataca(Guerreiro *g1, Guerreiro *g2){
    
    int golpe_g1 = g1->ataque+rolaDados()+rolaDados()+bonusCarisma(g1->carisma);
    int escudo_g2 = g2->defesa+rolaDados()+rolaDados()+bonusCarisma(g2->carisma);
    int dano = golpe_g1 - escudo_g2;

    if (dano>0){
        g2->pontos_vida = g2->pontos_vida - dano;
        if(g2->pontos_vida < 0){
            g2->pontos_vida = 0;
        }
    }
}

void main(){
    srand(time(NULL));
    Guerreiro j1,j2;
    criaGuerreiro(&j1, 1);
    criaGuerreiro(&j2, 2);
    ataca(&j1, &j2);
}