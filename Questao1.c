#include<stdio.h>

//Mariana Dias Almeida UC21102686

typedef struct {
	char nome[10];
	float altura;
	int idade;
	
}Pessoa;

Pessoa setPessoa(char nome[10], float altura, int idade){
	Pessoa P;
	int i = 0;
	for (i=0;i<10;i++){
		P.nome[i] = nome[i];
	}
	P.altura = altura;
	P.idade = idade;
	
	return P;
}
void imprimaPessoa(Pessoa P){
	printf("\nNome: %s \nAltura: %.2f \nIdade: %i", P.nome, P.altura,P.idade);
}
int main (void){
	
	Pessoa Mariana;
	Mariana = setPessoa("Mariana",1.6,20);
	
	Pessoa Victor;
	Victor = setPessoa("Victor",1.8,20);
	
	imprimaPessoa(Mariana);
	imprimaPessoa(Victor);
	
	return 0;
}
