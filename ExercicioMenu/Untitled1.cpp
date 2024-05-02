	#include<stdio.h>
	#include<stdlib.h>
	#include<locale.h>
	#include<cstdlib>  // adiciona o "pressione qualquer tecla para sair"(pause) e a função "exit(0)"
	
	void listaPedido1(){
		
		printf("Você ainda não fez nenhum pedido\n\n");
				
		system("pause");
		system("cls");
		
	}
	
	void listaPedido2(float valor){
		
		printf("Pedidos:\n\n");
		printf("Total: R$%.2f\n\n", valor);
		system("pause");
		system("cls");
		
	}
	
	void finalizar1(int sair){
		
		printf("\nVocê ainda não fez nenhum pedido. Tem certeza?\n");
		printf("1. Sim\n2. Não");
		printf("\n\nNúmero: ");
		scanf("%d", &sair);
					
		system("cls");
					
		while(sair != 1 && sair != 2){
					
			printf("\nVocê ainda não fez nenhum pedido. Tem certeza?\n");
			printf("1. Sim\n2. Não");
			printf("\n\nDigite um código válido\n");
			printf("\nNúmero: ");
			scanf("%d", &sair);
						
			system("cls");
						
		}
							
		if(sair == 1){
						
			system("cls");
			printf("Finalizando...");
						
			exit(0);
						
		}else if(sair == 2){
						
			system("cls");
						
		}	
			
	}
	
	void finalizar2(int sair, float valor){
		
		printf("\nFinalizando pedido. Tem certeza?\n");
		printf("1. Sim\n2. Não");
		printf("\n\nNúmero: ");
		scanf("%d", &sair);
						
		system("cls");
					
		while(sair != 1 && sair != 2){
						
			printf("\nFinalizando pedido. Tem certeza?\n");
			printf("1. Sim\n2. Não");
			printf("\n\nDigite um código válido\n");	
			printf("\nNúmero: ");
			scanf("%d", &sair);	
						
			system("cls");
						
		}
					
		if(sair == 1){
						
			system("cls");	
						
			printf("Finalizando...\n");
			printf("Total a ser pago: R$%.2f", valor);
						
			exit(0);
						
		}else if(sair == 2){
						
			system("cls");
						
		}
		
	}
	
	int main(){
		
		setlocale(LC_ALL, "Portuguese");
		
		int codigo, sair;
		float valor;
		
		do{
		
			printf("MENU\n");
			printf("------------------------------\n");
			printf("Faça seu pedido: \n");
			printf("1. Sanduíche natural - R$5,00\n2. X-Salada - R$15,00\n3. Refrigerante - R$3,50\n4. Suco - R$3,00\n5. Sorvete - R$9,00\n6. Lista de pedidos\n7. Finalizar pedido\n\n");
			printf("Número: ");
			scanf("%d", &codigo);
		
			system("cls");
		
			while(codigo < 1 || codigo > 7){
			
				printf("MENU\n");
				printf("------------------------------\n");
				printf("Faça seu pedido: \n");
				printf("1. Sanduíche natural - R$5,00\n2. X-Salada - R$15,00\n3. Refrigerante - R$3,50\n4. Suco - R$3,00\n5. Sorvete - R$9,00\n6. Lista de pedidos\n7. Finalizar pedido\n\n");
				printf("Digite um código válido\n\n");
				printf("Número: ");
				scanf("%d", &codigo);
		
				system("cls");
			
			}
		
			switch(codigo){
			
				case 1:
					valor = valor + 5;
					break;
			
				case 2:
					valor = valor + 15;
					break;
				
				case 3:
					valor = valor + 3.5;
					break;
				
				case 4:
					valor = valor + 3;
					break;
				
				case 5:
					valor = valor + 9;
					break;
					
				case 6:
					listaPedido1();
					break;
				
				case 7:
					finalizar1(sair);		
					break;
				
			}
			
		}while(valor == 0);
		
		do{
			
			printf("MENU\n");
			printf("------------------------------\n");
			printf("Adicionar ao pedido: \n");
			printf("1. Sanduíche natural - R$5,00\n2. X-Salada - R$15,00\n3. Refrigerante - R$3,50\n4. Suco - R$3,00\n5. Sorvete - R$9,00\n6. Lista de pedidos\n7. Finalizar pedido\n\n");
			printf("Número: ");
			scanf("%d", &codigo);
			
			system("cls");
			
			while(codigo < 1 || codigo > 7){
				
				printf("MENU\n");
				printf("------------------------------\n");
				printf("Adicionar ao pedido: \n");
				printf("1. Sanduíche natural - R$5,00\n2. X-Salada - R$15,00\n3. Refrigerante - R$3,50\n4. Suco - R$3,00\n5. Sorvete - R$9,00\n6. Lista de pedidos\n7. Finalizar pedido\n\n");
				printf("digite um número válido\n\n");
				printf("Número: ");
				scanf("%d", &codigo);
			
				system("cls");
				
			}
			
			switch(codigo){
			
				case 1:
					valor = valor + 5;
					break;
			
				case 2:
					valor = valor + 15;
					break;
				
				case 3:
					valor = valor + 3.5;
					break;
				
				case 4:
					valor = valor + 3;
					break;
				
				case 5:
					valor = valor + 9;
					break;
				
				case 6:
					listaPedido2(valor);
					break;
					
				case 7:		
					finalizar2(sair, valor);
					break;
		
			}
			
		}while(1);  //loop infinito  
		
		return 0;
	}
