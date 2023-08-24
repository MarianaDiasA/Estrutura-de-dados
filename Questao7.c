#include<stdio.h>

typedef struct {
	char titular[10];
	int numero;
	int saldo;
	
}ContaBancaria;

void menu(){
	printf("\n\n----Conta Bancaria----\n\n");
	printf("1. Depositar\n");
	printf("2. Sacar\n");
	printf("3. Verificar saldo\n");
	printf("4. Fechar\n");
}

void depositar (ContaBancaria *conta){
	int deposito = 0;
	printf("Valor que deseja depositar: \n");
	scanf("%d", &deposito);
	conta->saldo+=deposito;
}
void sacar (ContaBancaria *conta){
	int valor = 0;
	printf("Informe o valor para sacar: ");
	scanf("%d",&valor);
	conta->saldo-=valor;
}
void saldo (ContaBancaria *conta){
	printf("Saldo: %d",conta->saldo);
}
int main (void){
	
	char titular = 0;
	int numero = 0;
	int resp;
	ContaBancaria conta;
	printf("Informe o titular: ");
	scanf("%s", &titular);
	printf("Informe o numero da conta: ");
	scanf("%d", &numero);
	
	while(1){
		menu();
		printf("Sua resposta: ");
		fflush(stdin);
		scanf("%d", &resp);
		
		switch (resp) {
			case 1:
				depositar(&conta);
				printf("Valor depositado!\n");
				break;
			case 2:
				sacar(&conta);
				printf("Valor sacado!");
				break;
			case 3:
				saldo(&conta);
				break;
			case 4:
				return 0;
		}	
	}	
}

