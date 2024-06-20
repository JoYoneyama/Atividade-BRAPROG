	//Muito uso de variaveis universais
	//as funcoes sao passadas sem nenhum parametro por conta disso
	
	#include<stdio.h>
	#include<stdlib.h>
	#include<locale.h>
	#include<cstdlib>  // adiciona o "pressione qualquer tecla para sair"(pause) e a função "exit(0)"
	#include<windows.h>  //adiciona a funcao sleep
	
	float valor = 0, sanduiche = 0, xsalada = 0, refri = 0, suco = 0, sorvete = 0;          //variaveis universais
	
	void listaPedido1(){
		
		printf("Você ainda não fez nenhum pedido\n\n");
				
		system("pause");
		system("cls");
		
	}
	
	void listaPedido2(){
	
	int codigo, cancPedido;
	
		do{
		
			do{
		
				printf("Pedidos:\n\n");
			
				if(sanduiche > 0) printf("%.0fx Sanduíche natural - R$%.2f\n", sanduiche, sanduiche * 5);
				if(xsalada > 0) printf("%.0fx X-Salada - R$%.2f\n", xsalada, xsalada * 15);
				if(refri > 0) printf("%.0fx Refrigerante - R$%.2f\n", refri, refri * 3.50);
				if(suco > 0) printf("%.0fx Suco - R$%.2f\n", suco, suco * 3);
				if(sorvete > 0) printf("%.0fx Sorvete - R$%.2f\n", sorvete, sorvete * 9);
		
				printf("\nTotal: R$%.2f\n\n", valor);
				printf("1. Cancelar pedido\n2. Voltar");
				printf("\n\n----> ");
				scanf("%d", &codigo);
			
				if(codigo < 1 || codigo > 2){
				
					printf("\nDigite um código válido");
					Sleep(1500);
				
				}
		
				system("cls");
			
			}while(codigo < 1 || codigo > 2);
		
			switch(codigo){
			
				case 1:
					do{
				
						printf("Cancelar pedido:\n\n");
				
						if(sanduiche > 0) printf("1. Sanduíche natural %.0fx\n", sanduiche);
						if(xsalada > 0) printf("2. X-Salada %.0fx\n", xsalada);
						if(refri > 0) printf("3. Refrigerante %.0fx\n", refri);
						if(suco > 0) printf("4. Suco %.0fx\n", suco);
						if(sorvete > 0) printf("5. Sorvete %.0fx\n", sorvete);
				
						printf("\n----> ");
						scanf("%d", &cancPedido);
					
						if(cancPedido < 1 || cancPedido > 5){
							
							printf("\nDigite um código válido");
							Sleep(1500);
						
						}
						
						system("cls");
				
					}while(cancPedido < 1 || cancPedido > 5);
				
					switch(cancPedido){
					
						case 1:
							if(sanduiche != 0){
								
								sanduiche--;
								valor -= 5;
								
							} 
							break;
						
						case 2:
							if(xsalada != 0){
								
								xsalada--;
								valor -= 15;
								
							} 
							break;
						
						case 3:
							if(refri != 0){
								
								refri--;
								valor -= 3.50;
								
							} 
							break;
						
						case 4:
							if(suco != 0){
								
								suco--;
								valor -= 3;
								
							} 
							break;
						
						case 5:
							if(sorvete != 0){
								
								sorvete--;
								valor -= 9;
								
							}
							break;
					
					}
					break;
				
				case 2:
					break;
			}
		
		}while(codigo != 2);		
	}
	
	void finalizar1(){
		
		int sair;
		
		do{
		
			printf("Você ainda não fez nenhum pedido. Tem certeza?\n");
			printf("1. Sim\n2. Não");
			printf("\n\n----> ");
			scanf("%d", &sair);
			
			if(sair < 1 || sair > 2){
				
				printf("\nDigite um código válido");
				Sleep(1500);
				
			}
					
			system("cls");
					
		}while(sair < 1 || sair > 2);
							
		if(sair == 1){
						
			system("cls");
			printf("Finalizando...");
						
			exit(0);
						
		}else if(sair == 2){
						
			system("cls");
						
		}	
			
	}
	
	void finalizar2(){
		
		int sair;
		
		do{
		
			printf("Finalizando pedido. Tem certeza?\n");
			printf("1. Sim\n2. Não");
			printf("\n\n----> ");
			scanf("%d", &sair);
		
			if(sair < 1 || sair > 2){
			
				printf("\nDigite um código válido");
				Sleep(1500);
			
			}
						
			system("cls");
					
		}while(sair < 1 || sair > 2);
					
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
		
		int codigo;
		
		do{
			
			do{
			
				printf("MENU\n");
				printf("================================\n");
				printf("Faça seu pedido: \n\n");
				printf("1. Sanduíche natural - R$5,00\n2. X-Salada - R$15,00\n3. Refrigerante - R$3,50\n4. Suco - R$3,00\n5. Sorvete - R$9,00\n\n6. Lista de pedidos\n7. Finalizar pedido\n\n");
				printf("----> ");
				scanf("%d", &codigo);
				
				if(codigo < 1 || codigo > 7){
					
					printf("\nDigite um código válido");
					Sleep(1500);
					
				}
		
				system("cls");
		
			}while(codigo < 1 || codigo > 7);
		
			switch(codigo){
			
				case 1:
					valor = valor + 5;
					sanduiche++;
					break;
			
				case 2:
					valor = valor + 15;
					xsalada++;
					break;
				
				case 3:
					valor = valor + 3.5;
					refri++;
					break;
				
				case 4:
					valor = valor + 3;
					suco++;
					break;
				
				case 5:
					valor = valor + 9;
					sorvete++;
					break;
					
				case 6:
					if(valor == 0) listaPedido1();
					if(valor != 0) listaPedido2();
					break;
				
				case 7:
					if(valor == 0) finalizar1();	
					if(valor != 0) finalizar2();	
					break;
				
			}
			
		}while(1);  //loop infinito
		
		return 0;
	}
