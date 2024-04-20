	#include<stdio.h>
	#include<stdlib.h>
	#include<locale.h>
	
	int main(){
		
		setlocale(LC_ALL, "Portuguese");
		
		int codigo, sair;
		float valor;
		
		printf("MENU\n");
		printf("------------------------------\n");
		printf("Fa�a seu pedido: \n");
		printf("1. Sandu�che natural - R$5,00\n2. X-Salada - R$15,00\n3. Refrigerante - R$3,50\n4. Suco - R$3,00\n5. Sorvete - R$9,00\n6. Finalizar pedido\n\n");
		printf("N�mero: ");
		scanf("%d", &codigo);
		
		system("cls");
		
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
				do{
					
					printf("\nVoc� ainda n�o fez nenhum pedido. Tem certeza?\n");
					printf("1. Sim\n2. N�o");
					printf("\n\nN�mero: ");
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
						
						printf("\nDigite um c�digo v�lido\n");
						
					}
					
				}while(sair != 1 || sair != 2);					
				break;
				
			default:
				break;
				
		}
		
		do{
			
			system("cls");
			
			printf("\nAdicionar ao pedido: \n");
			printf("1. Sandu�che natural - R$5,00\n2. X-Salada - R$15,00\n3. Refrigerante - R$3,50\n4. Suco - R$3,00\n5. Sorvete - R$9,00\n6. Finalizar pedido\n\n");
			printf("N�mero: ");
			scanf("%d", &codigo);
			
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
					do{
					
						system("cls");
					
						printf("\nFinalizando pedido. Tem certeza?\n");
						printf("1. Sim\n2. N�o");
						printf("\n\nN�mero: ");
						scanf("%d", &sair);
					
						if(sair == 1){
						
							system("cls");
							printf("Finalizando...\n");
							printf("Total a ser pago: R$%.2f", valor);
						
							return 0;
						
						}else if(sair == 2){
						
							break;
						
						}else{
						
							printf("Digite um c�digo v�lido\n");
						
						}
					
						}while(sair != 1 || sair != 2);					
						break;
				
				default:
					break;
		
			}
			
		}while(1);  //loop infinito  
		
		return 0;
	}
