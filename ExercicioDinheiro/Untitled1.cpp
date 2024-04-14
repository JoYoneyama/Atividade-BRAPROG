		#include<stdio.h> 
		#include<stdlib.h>
		#include<locale.h>
		
		int main(){
			
			setlocale(LC_ALL, "Portuguese");
			
			int moeda05, moeda10, moeda25, moeda50, moeda1, possib=0;
			float m05, m10, m25, m50, m1, valor;
			
			printf("Digite um valor: R$");
			scanf("%f", &valor);
			
			for(m05=0; m05 <= valor+0.001; m05=m05+0.05){
				
				for(m10=0; m05+m10 <= valor+0.001; m10=m10+0.1){
					
					for(m25=0; m05+m10+m25 <= valor; m25=m25+0.25){
						
						for(m50=0; m05+m10+m25+m50 <= valor; m50=m50+0.5){
							
							for(m1=0; m05+m10+m25+m50+m1 <= valor; m1++){
								
								if(valor == m1+m50+m25+m10+m05){
									
									possib++;
									moeda05=m05/0.05;
									moeda10=m10/0.1;
									moeda25=m25/0.25;
									moeda50=m50/0.5;
									moeda1=m1/1;
									
									printf("\n%d. R$1,00: %d - R$0,50: %d - R$0,25: %d - R$0,10: %d - R$0,05: %d\n", possib, moeda1, moeda50, moeda25, moeda10, moeda05);	
									
								}

							}
						}
					}
				}
			}
			
			return 0;
		}
