		#include<stdio.h>
	//biblioteca para matem�tica
		#include<math.h>
	//biblioteca para gram�tica portuguesa
		#include<stdlib.h>
		#include<locale.h>
		
				int main(){
					
				//comando para setar gram�tica
					setlocale(LC_ALL,"Portuguese");
					
					float A, B, C;
					
					/*
					
					COMO USAR RAIZ QUADRADA
					
					scanf("%d", &A);
					printf("\nraiz quadrada: %d", B=sqrt(A));
					
					*/	
												
					printf("Equa��o de 2� grau (Bh�skara)");
					printf("\nInforme os valores das inc�gnitas A, B e C");
					printf("\n\nA: ");
					scanf("%f", &A);
					printf("B: ");
					scanf("%f", &B);
					printf("C: ");
					scanf("%f", &C);
					
					float Delta=B*B-4*A*C, x1, x2;
					int raiz=sqrt(Delta);
					
					printf("\nO valor de delta � %.0f", Delta);
					
					if(Delta > 0){
					
						printf("\nOs valores de X s�o %.2f e %.2f", x1=(B-(B*2)+raiz)/(2*A), x2=(B-(B*2)-raiz)/(2*A));
					
					}else{
						
						printf("\nN�o existem valores reais para X");
						
					}
					
						return 0;
				}
