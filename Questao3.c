#include<stdio.h>
#include<math.h>


typedef struct {		// fazendo struct
	float x;
	float y;
}Ponto;

float getPontoX(Ponto p){		//pegando os valores da funcao (x e y -> especificando cada um)
	return p.x;   //quero retornar x
}
float getPontoY(Ponto p){
	return p.y;		//quero retornar y
}

int main (void){
	Ponto ponto;	//declarei ponto como Ponto 

	printf("\ncoordenada x:  ");	
	scanf("%f",&ponto.x);		//na struct tem o valor de x e y --> especifico o x e o y
	printf("\ncoordenada y: ");
	scanf("%f",&ponto.y);
	
	Ponto ponto2;
	
	printf("\ncoordenada x:  ");	
	scanf("%f",&ponto2.x);		//na struct tem o valor de x e y --> especifico o x e o y
	printf("\ncoordenada y: ");
	scanf("%f",&ponto2.y);
	
	float distancia = 0;		//calcular a distancia
	float inclinacao = 0;
	
	distancia = sqrt((getPontoX(ponto2))-(getPontoX(ponto))+(getPontoY(ponto2)-(getPontoY(ponto))));		//pego os valores
	
	printf("\nDistancia: %.1f", distancia);
	
	inclinacao = ((getPontoY(ponto))-(getPontoY(ponto2)))/((getPontoX(ponto))-(getPontoX(ponto2)));
	
	printf("\nInclinacao: %.1f", inclinacao);
	
	return 0;
}
