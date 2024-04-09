		#include<stdio.h>
		#include<stdlib.h>
		#include<locale.h>
		
		int main(){
			
			setlocale(LC_ALL, "Portuguese");
			
			float valor, m05;
			int moedas05 = 0;
			
			printf("\nInsira o valor desejado: ");
			scanf("%f", &valor);
			
			for(m05=0; m05<valor; m05=m05+0.05){			
						
				moedas05++;					
						
			}
			
			printf("\nMoedas de 5 centavos: %d", moedas05);
			
			return 0;
		}
