#include<stdio.h>
#include<string.h>
#include <time.h>

typedef struct{
	int dia;
	int mes;
	int ano;
} Data;

typedef struct{
	char nome[30];
	char cargo[20];
	double salario;
}Funcionario;

void setFuncionario(Funcionario *f, Data *d){
	char nome[30];
	char cargo[20];
	double salario = 0;
	
	int dia = 0;
	int mes = 0;
	int ano = 0;
	
	fflush(stdin);
	printf("Digite o nome: ");
	gets(nome);
	strcpy(f->nome, nome);
	fflush(stdin);
	
	printf("Digite o cargo: ");
	gets(cargo);
	strcpy(f->cargo, cargo);
	fflush(stdin);
	
	printf("Digite o salario: ");
	scanf("%d", &salario);
	f->salario = salario;
	fflush(stdin);
	
	printf("Que dia ele(a) entrou: ");
	scanf("%i", &dia);
	d->dia = dia;
	fflush(stdin);
	
	printf("Que mes ele(a) entrou: ");
	scanf("%i", &mes);
	d->mes = mes;
	fflush(stdin);
	
	printf("Que mes ele(a) entrou: ");
	scanf("%i", &ano);
	d->ano = ano;
	fflush(stdin);
}

void dadosFuncionario(Funcionario *f){
	printf("\nNome: %s\n", f->nome);
	printf("Cargo: %s\n", f->cargo);
	printf("Salario:  %d\n\n", f->salario);
}

void aumentoSalarial(Funcionario *f){
	double aumento = 0;
	
	printf("Digite o valor do aumento: ");
	scanf("%d", &aumento);
	f->salario += aumento;
}

void tempoServivo(Data *d){
	int diaAtual = 24;
	int mesAtual = 8;
	int anoAtual = 2023;
	
	int dia = 0, mes = 0, ano = 0;
	
	dia = diaAtual - d->dia;
	mes = mesAtual - d->mes;
	ano = anoAtual - d->ano;
	
	if(dia < 0){
		dia += 30;
	}
	if(mes < 0){
		mes += 12;
	}
	if(ano < 0){
		printf("Não tem como ele ter entrado no futuro redigite os dados dele");
	}
	
	printf("\nTempo: %i dias %i meses %i anos\n", dia, mes, ano);

}

void menu(){
	printf("-------Empresa------\n");
	printf("1- Declarar funcionario\n");
	printf("2- Aumentar salario\n");
	printf("3- Mostrar dados do funcionario\n");
	printf("4- Mostrar tempo com o funcionario\n");
	printf("9-Sair\n");
	printf("Digite a opcao: ");
}

int main(){
	Funcionario fun;
	Data data;
	
	int resp;
	
	while(1){
		menu();
		scanf("%i", &resp);
		switch(resp){
			case 1:
				setFuncionario(&fun, &data);
				break;
			case 2:
				aumentoSalarial(&fun);
				break;
			case 3:
				dadosFuncionario(&fun);
				break;
			case 4:
				tempoServivo(&data);
				break;
			case 9:
				return 0;
		}
	}
	
	return 0;
}
