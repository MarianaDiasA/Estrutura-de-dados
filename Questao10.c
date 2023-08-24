#include<stdio.h>

typedef struct {
	float dolar;
	float euro;
}Moeda;

void menu (){
	printf("----Menu----\n\n");
	printf("1. Euro\n");
	printf("2. Dolar\n");
}

int main (void){
	int resp;
	
	Moeda moedas;
	menu ();
	printf("Informe o tipo de moeda: ");
	scanf("%d",&resp);
	printf("Informe o valor da moeda: ");
	
	
	if (resp==1){
		scanf("%f", &moedas.euro);
		moedas.dolar = moedas.euro*1.09;	
	}else if (resp==2){
		scanf("%f", &moedas.dolar);
		moedas.euro = moedas.dolar*0.92;
	}
	
	printf("Valor em dolar: %.2f \nValor em euro: %.2f",moedas.dolar,moedas.euro);
	
	return 0;
}
