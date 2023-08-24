#include<stdio.h>

typedef struct {
	char nome[10];
	char matricula[10];
	float nota1;
	float nota2;
	float nota3;
}Estudante;

void notas (Estudante *e){
	
	printf("Informe as notas: \n");
	printf("Nota 1: ");
	scanf("%f", &e->nota1);
	printf("Nota 2: ");
	scanf("%f", &e->nota2);
	printf("Nota 3: ");
	scanf("%f", &e->nota3);
}

float media (Estudante *e){
	
	float media = 0;
	media = (e->nota1+e->nota2+e->nota3)/3;
	printf("A media das notas: %.1f\n",media);
	
	if (media>=7){
		printf("O aluno esta aprovado!");
	}else {
		printf("O aluno reprovou!");
	}
	
}

int main (void){
	
	char nome[10];
	char matricula[10];
	
	Estudante aluno;
	
	printf("----Dados do aluno----\n\n");
	printf("Informe seu nome: \n");
	gets(nome);
	printf("Informe a sua matricula: \n");
	gets(matricula);
	
	notas(&aluno);
	media(&aluno);
	
	
	
	return 0;
}

