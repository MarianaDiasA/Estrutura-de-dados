#include<stdio.h>
#include<string.h>

int QT = 0;

typedef struct{
	char nome[20];
	char telefone[20];
}Contato;

void menu(){
	printf("---Agenda----\n");
	printf("1- Cadastrar\n");
	printf("2- Listar todos\n");
	printf("3- Pesquisar\n");
	printf("4- Fechar\n");
}

void cadastrar(Contato *c) {     //usa a setinha para acessar um atributo de um ponteiro de struct
	fflush(stdin);
	printf("Nome: ");				//usando ponteiro p poder guardar varios valores
	gets(c->nome);
	printf("Telefone: ");
	gets(c->telefone);
}

void consultarTodos(Contato *arr) {
	int x = 0;
	
	printf("\nTODOS OS USUARIOS:\n");
	for (x; x < QT; x++) printf("%s \n", arr[x].nome);
}

void buscarNome(Contato *arr) {
	char nome[50];
	int i = 0;
	printf("Informe o nome do contato: ");
	fflush(stdin);
	gets(nome);
	for (i=0;i<50;i++){
		if (strcmp(nome,arr[i].nome)==0){
			printf("%s : %s\n",arr[i].nome,arr[i].telefone);
		}
	}
	
}

int main(void) {
	int resp;
	Contato contatos[50];
	
	while(1) {
		menu();
		printf("Sua resposta: ");
		fflush(stdin);
		scanf("%d", &resp);
		
		switch (resp) {
			case 1:
				cadastrar(&contatos[QT]);
				QT++;
				printf("Contato Cadastrado! \n\n");
				break;
			case 2:
				consultarTodos(&contatos);
				printf("\n");
				break;
			case 3:
				buscarNome(&contatos);
				break;
			case 4:
				return 0;
		}
	}
}

