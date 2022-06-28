#include <stdio.h>
int main(){
	int cpf, d1, d2, d3, d4, d5, d6, d7, d8, d9, somap, dezena, somad, unidade;
	
	
	printf("CPF - sem digitio verificador: ");
	scanf("%d",&cpf);

	d1 = cpf/100000000; //encontra  o ultimo digito
	
	d2 = cpf / 10000000; // encontra o ultimo digito junto com o penultimo (15)
	d2 = d2 % 10; // retira o primeiro digito e encontramos so o penultimo 
	
	d3 = cpf / 1000000; // encontra os tres ultimos (157)
	d3 = d3 % 100; // (57)
	d3 = d3 % 10; //(7)
	
	d4 = cpf / 100000; // encontra os 4 ultimos digitos
	d4 = d4 % 1000; // (578)
	d4 = d4 % 100; // (78)
	d4 = d4 % 10; // (8)
	
	d5 = cpf / 10000; // encontra os 5 ultimos digitos (15785)
	d5 = d5 % 10000; //(15785)
	d5 = d5 % 1000; // (5785)
	d5 = d5 % 100; // (785)
	d5 = d5 % 10; // (85)
	
	d6 = cpf / 1000; // encontra os 6 ultimos digitos (157850)
	d6 = d6 % 100000; // (57850)
	d6 = d6 % 10000; //(57850)
	d6 = d6 % 1000; // (7850)
	d6 = d6 % 100; // (850)
	d6 = d6 % 10; // (50)
	
	d7 = cpf / 100; // encontra os 7 ultimos digitos (1578504)
	d7 = d7 % 1000000; //(578504) 
	d7 = d7 % 100000; //(78504)
	d7 = d7 % 10000; //(78504)
	d7 = d7 % 1000; // (8504)
	d7 = d7 % 100; // (504)
	d7 = d7 % 10; // (04)
	
	d8 = cpf / 10; // encontra os 8 ultimos digitos (15785043)
	d8 = d8 % 10000000; //(785043) 
	d8 = d8 % 1000000; //(785043) 
	d8 = d8 % 100000; //(85043)
	d8 = d8 % 10000; //(85043)
	d8 = d8 % 1000; // (5043)
	d8 = d8 % 100; // (043)
	d8 = d8 % 10; // (43)
	
	d9 = cpf % 100000000;//(57850436) 
	d9 = d9 % 10000000; //(50436) 
	d9 = d9 % 1000000; //(0436) 
	d9 = d9 % 100000; //(50436)
	d9 = d9 % 10000; //(50436)
	d9 = d9 % 1000; // (0436)
	d9 = d9 % 100; // (436)
	d9 = d9 % 10; // (36)  
	
	somap = 2*d9 + 3*d8 + 4*d7 + 5*d6 + 6*d5 + 7*d4 + 8*d3 + 9*d2 + 10*d1;
	//somap= 234;
	
	dezena = somap % 11; 
	dezena = 11 - dezena;
	
	somad = 2*dezena + 3*d9 + 4*d8 + 5*d7 + 6*d6 + 7*d5 + 8*d4 + 9*d3 + 10*d2 + 11*d1;
	
	unidade = somad % 11;
	unidade = 11 - unidade; 
	
	printf("%d %d", dezena, unidade);
	//printf("%d %d %d %d %d %d %d %d %d ",d1,d2, d3, d4, d5, d6, d7, d8, d9);
	
	
return 0;
}