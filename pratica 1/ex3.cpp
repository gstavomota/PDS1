#include <stdio.h>
int main(){
	
	float poupanca = 789.54;
	
	poupanca = poupanca * 1.0056; //rendimento primeiro mes
	
	poupanca = poupanca + 303.20;
	poupanca = poupanca * 1.0056; // rendimento segundo mes
	
	poupanca = poupanca - 58.25;
	poupanca = poupanca * 1.0056;// rendimento terceiro mes
		
	printf("%.2f",poupanca);
	
	return 0;