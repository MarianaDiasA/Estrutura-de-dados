#include<stdio.h>
#include<string.h>

int QNT=0;

typedef struct {
	char titulo[50];
	char autor[50];
	char ano[50];
}Livro;

void menu(){
	printf("----Menu----\n");
	printf("1. Adicionar\n");
	printf("2. Listar livros\n");
	printf("3. Buscar por autor\n");
	printf("4. Fechar\n");
}

void cadastrar (Livro *l){
	fflush(stdin);
	printf("Titulo: ");
	gets(l->titulo);
	printf("Autor: ");
	gets(l->autor);
	printf("Ano: ");
	gets(l->ano);
}

void buscarTodos (Livro *arr){
	int x = 0;
	printf("\nTodos os livros: \n");
	for (x=0;x<QNT;x++)printf("%s \n",arr[x].titulo);
}
	
void buscarLivro (Livro *arr){
	char nome[50];
	int i = 0;
	printf("Informe o nome do autor: ");
	fflush(stdin);
	gets(nome);
	for (i=0;i<50;i++){
		if (strcmp(nome,arr[i].autor)==0);
		printf("%s : %s /n",arr[i].autor,arr[i].titulo);
	}
	
}
	
int main (void){
	int resp;
	
	Livro livros[50];
	
	while(1){
		menu();
		printf("Sua resposta: ");
		fflush(stdin);
		scanf("%d", &resp);
		
		switch (resp) {
			case 1:
				cadastrar(&livros[QNT]);
				QNT++;
				printf("Livro cadastrado \n\n");
				break;
			case 2:
				buscarTodos(&livros);
				printf("\n");
				break;
			case 3:
				buscarLivro(&livros);
				break;
			case 4:
				return 0;
		}
	}
}
