#include<stdio.h>
#include<string.h>

typedef struct {
	char nome[50];
	float preco;
	int quantidade;
	int cod;
}Produto;

int main (void){
	Produto arr[50];
	int qt = 0;
	strcpy(arr[qt].nome,"macarrao");
	arr[qt].preco = 40;
	arr[qt].quantidade = 60;
	arr[qt].cod = 214;
	qt++;
	
	strcpy(arr[qt].nome,"chocolate");
	arr[qt].preco = 12;
	arr[qt].quantidade = 60;
	arr[qt].cod = 753;
	qt++;
	
	strcpy(arr[qt].nome,"caramelo");
	arr[qt].preco = 16;
	arr[qt].quantidade = 60;
	arr[qt].cod = 826;
	qt++;
	
	strcpy(arr[qt].nome,"hamburguer");
	arr[qt].preco = 10;
	arr[qt].quantidade = 60;
	arr[qt].cod = 927;
	qt++;
	
	strcpy(arr[qt].nome,"leite");
	arr[qt].preco = 50;
	arr[qt].quantidade = 60;
	arr[qt].cod = 149;
	qt++;
	
	
	int qnt,opt,x,r = 0;
	float custo = 0;
	
	while (r>=0){
		printf("\n---Produtos---\n");
		for (x=0;x<qt;x++){
			printf("%d : %s : %d : %.2f\n",arr[x].cod,arr[x].nome,arr[x].quantidade,arr[x].preco);
		}
		printf("Informe o codigo do produto: ");
		scanf("%d", &opt);
		for (x=0;x<qt;x++){
			if (opt==arr[x].cod){
				printf("Qual a quantidade: ");
				scanf("%d", &qnt);
				arr[x].quantidade-=qnt;
				printf("Estoque atual: %d\n", arr[x].quantidade);
				custo+=arr[x].preco*qnt;
			}
		}
		printf("Preco do carrinho: %.2f\n", custo);
		printf("Digite um numero negativo se quiser fechar o carrinho: ");
		scanf("%d", &r);
	}
	return 0;
}



