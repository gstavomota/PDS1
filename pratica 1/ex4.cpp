#include <stdio.h>

int main(){
	float pesoB = 122, imcB, alturaB = 1.84, pesoO = 45, imcO, alturaO = 1.76;
	
	
	imcB = pesoB / (alturaB * alturaB);
	imcO = pesoO / (alturaO * alturaO);
	
	printf("IMC Olilivia: %.2f \nIMC Brutus: %.2f", imcO, imcB);
	
	
	printf ("\nO Brutus deve perder %.2f kg", imcB-25);
	printf("\nA Olivia deve ganhar %.2f kg", 18.5-imcO);
	
	
	return 0;
}