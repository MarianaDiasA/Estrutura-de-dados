#include<stdio.h>

typedef struct {
	
	int numero;
	float numerof;
	char letra;
	
	
}Tipo;

void setTipo(Tipo *T,int numero,float numerof,char letra){
	T->numero = numero;
	T->numerof = numerof;
	T->letra = letra;
}

void imprimaTipo(Tipo *T){
	printf("\nnumero inteiro: %i \nnumero flutuante: %f \nletra: %c", T->numero, T->numerof, T->letra);
}
int main (void){
	
	Tipo teste;
	setTipo(&teste,20,1.2,'M');
	
	imprimaTipo(&teste);
	
	return 0;
}
