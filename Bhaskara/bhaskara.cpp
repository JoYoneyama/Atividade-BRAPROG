		#include<stdio.h>
	//biblioteca para matemática
		#include<math.h>
	//biblioteca para gramática portuguesa
		#include<stdlib.h>
		#include<locale.h>
		
				int main(){
					
				//comando para setar gramática
					setlocale(LC_ALL,"Portuguese");
					
					float A, B, C;
					
					/*
					
					COMO USAR RAIZ QUADRADA
					
					scanf("%d", &A);
					printf("\nraiz quadrada: %d", B=sqrt(A));
					
					*/	
												
					printf("Equação de 2º grau (Bháskara)");
					printf("\nInforme os valores das incógnitas A, B e C");
					printf("\n\nA: ");
					scanf("%f", &A);
					printf("B: ");
					scanf("%f", &B);
					printf("C: ");
					scanf("%f", &C);
					
					float Delta=B*B-4*A*C, x1, x2;
					int raiz=sqrt(Delta);
					
					printf("\nO valor de delta é %.0f", Delta);
					
					if(Delta > 0){
					
						printf("\nOs valores de X são %.2f e %.2f", x1=(B-(B*2)+raiz)/(2*A), x2=(B-(B*2)-raiz)/(2*A));
					
					}else{
						
						printf("\nNão existem valores reais para X");
						
					}
					
						return 0;
				}
