	#include<stdio.h>
	#include<stdlib.h>
	#include<locale.h>
	#include<cstdlib>  // adiciona o pressione qualquer tecla para sair
	
	int main(){
		
		setlocale(LC_ALL, "Portuguese");
		
		int codigo, sair;
		float valor;
		
		printf("MENU\n");
		printf("------------------------------\n");
		printf("Faça seu pedido: \n");
		printf("1. Sanduíche natural - R$5,00\n2. X-Salada - R$15,00\n3. Refrigerante - R$3,50\n4. Suco - R$3,00\n5. Sorvete - R$9,00\n6. Lista de pedidos\n7. Finalizar pedido\n\n");
		printf("Número: ");
		scanf("%d", &codigo);
		
		system("cls");
		
		while(codigo < 1 || codigo >7){
			
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
				printf("Você ainda não fez nenhum pedido\n\n");
				system("pause");
				system("cls");
				break;
				
			case 7:
				do{
					
					printf("\nVocê ainda não fez nenhum pedido. Tem certeza?\n");
					printf("1. Sim\n2. Não");
					printf("\n\nNúmero: ");
					scanf("%d", &sair);
					
					if(sair == 1){
						
						system("cls");
						printf("Finalizando...");
						
						return 0;
						
					}else if(sair == 2){
						
						system("cls");
						break;
						
					}else{
						
						system("cls");
						
						printf("\nDigite um código válido\n");
						
					}
					
				}while(sair != 1 || sair != 2);					
				break;
				
		}
		
		do{
			
			printf("\nAdicionar ao pedido: \n");
			printf("1. Sanduíche natural - R$5,00\n2. X-Salada - R$15,00\n3. Refrigerante - R$3,50\n4. Suco - R$3,00\n5. Sorvete - R$9,00\n6. Lista de pedidos\n7. Finalizar pedido\n\n");
			printf("Número: ");
			scanf("%d", &codigo);
			
			system("cls");
			
			while(codigo < 1 || codigo > 7){
				
				printf("\nAdicionar ao pedido: \n");
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
					printf("Pedidos:\n\n");
					printf("Total: R$%.2f\n\n", valor);
					system("pause");
					system("cls");
					break;
					
				case 7:
					do{			
					
						printf("\nFinalizando pedido. Tem certeza?\n");
						printf("1. Sim\n2. Não");
						printf("\n\nNúmero: ");
						scanf("%d", &sair);
						
						system("cls");
					
						if(sair == 1){
						
							system("cls");
							printf("Finalizando...\n");
							printf("Total a ser pago: R$%.2f", valor);
						
							return 0;
						
						}else if(sair == 2){
						
							break;
						
						}else{
						
							system("cls");
							
							printf("Digite um código válido\n");
						
						}
					
						}while(sair != 1 || sair != 2);					
						break;
				
				default:
					break;
		
			}
			
		}while(1);  //loop infinito  
		
		return 0;
	}
