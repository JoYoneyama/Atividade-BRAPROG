		#include<stdio.h> yo
		#include<stdlib.h>
		#include<locale.h>
		
		int main(){
			
			setlocale(LC_ALL, "Portuguese");
			
			float valor, m05, m10, m25, m50, m1;
			int moeda05=0, moeda10=0, moeda25=0, moeda50=0, moeda1=0;
			
			printf("\nInsira o valor desejado: ");
			scanf("%f", &valor);
			
			for(m05=0.05; m05<=valor+0.001; m05=m05+0.05){ //valor+0.001 pq a soma de vários 0.05 causa imprecisão no cálculo
				
				moeda05++;
		
			}
			
			for(m10=0.1; m10<=valor+0.001; m10=m10+0.1){
					
				moeda10++;
					
			}
			
			for(m25=0.25; m25<=valor; m25=m25+0.25){
				
				moeda25++;
				
			}
			
			for(m50=0.5; m50<=valor; m50=m50+0.5){
				
				moeda50++;
				
			}
			
			for(m1=1; m1<=valor; m1++){
				
				moeda1++;
				
			}
			
			printf(" moedas de 0.05: %d - moedas de 0.1: %d - moedas de 0.25: %d - moedas de 0.5: %d - moedas de 1: %d", moeda05, moeda10, moeda25, moeda50, moeda1);
			
			return 0;
		}
