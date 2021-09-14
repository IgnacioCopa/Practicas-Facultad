/*rufini*/


#include<stdio.h>

int main(){
	
	int exponente,terminos, divisores_p[100],divisores_n[100], divisibles, posicion=0;
	int calculo=0 , calculo2=0;
	int x[100] ,xN[100], i=0, j, n, f, k=0, l=0, e=0;
	
	
	
	
	//el exponente mas alto-----------------------------------------------------------------------------------------------------
	
	printf("calcule ruffini: \n");
	
	printf("introduzca el numero de exponente mas alto en (X^): ");
	scanf("%i",&exponente);
	
	printf("\n");
	
	terminos=exponente;
	
	//terminos que se seleccionan para la operacion (coeficiente y termino independiente)---------------------------------------------------
	do{
		
		if(terminos!=0){
			
		printf("introduzca el valor del coeficiente (X^%i) termino: ",terminos);
		scanf("%i",&x[posicion]);
			
		}
		else{
		printf("introduzca el 'termino independiente': ",terminos);
		scanf("%i",&x[posicion]);
			
		}
		
		xN[posicion]=x[posicion];
		
		posicion++;
		terminos--;
		
		
	}while(posicion<=exponente);
	
	//los divisores del termino independiente------------------------------------------------------------------------------------------------
	printf("\n");
	
	//en caso de que el termino independiente sea negativo
	
	if(x[exponente]<=0){
		
		xN[exponente]=((-1)*x[exponente]);
	}
	
	//positivos
	for(j=1 ; j<=xN[exponente] ; j++){
		
		divisibles= (xN[exponente]%j);
		
		if(divisibles==0){
			
			printf("el numero %i es divisible por %i \n",xN[exponente],j);
			divisores_p[i]=j;
			
			i++;
		}
	}
	
	//negativos
	for(n=0; n<=xN[exponente] ;n++){
		
		divisores_n[n]= ((-1)*divisores_p[n]);
		printf("el numero %i es divisible por %i \n",xN[exponente],divisores_n[n]);
		
	}
	
	printf("\n");
	printf("\n");

	printf("CALCULO DIVISORES POSITIVOS \n\n");
	
	
	//calculo (POSITIVOS)--------------------------------------------------------------------------------------------------------------------------------------
	
	do{
		
		for(f=0; f<exponente; f++){
					
			//primera vez (positivos)	
			if(f==0){
				
				calculo= (divisores_p[l]* x[f])+(x[f+1]);
				printf("(%i) (%iX^%i ",divisores_p[l],x[f],exponente-1);
				e= -2;
					
			}
			
			//es resto de veses
			else{
				
					
				calculo= (divisores_p[l]* calculo)+(x[f+1]); //-------------
				
				e--;
					
			}
			
			if((exponente+e)>0){
				
				if(calculo>0){
					
					printf("+%iX^%i ",calculo, exponente+e);
					
					
				}
				else{
					
					printf("%iX^%i ",calculo, exponente+e);
					
				}
				
			}
			else{
				
				if(calculo>0){
				
				printf("+%i)",calculo);
				
				}
				
				else if (calculo<0){
				
				printf("%i)",calculo);
				
				}
				
				if(calculo==0){
				
					if(divisores_p[l]<0){
					
					printf(" * (X+%i)  RESPUESTA",(-1)*divisores_p[l]);
					
					}
					else{
						
					printf(" * (X%i)  RESPUESTA",(-1)*divisores_p[l]);
						
					}
				}
				
			}
			

					
	
	    }
	    
	    printf("\n");
		
		calculo=0;
		e=0;
		
		l++;	
		
	}while(l<=exponente);
	

	printf("\n");
	printf("\n");
	
	printf("CALCULO DIVISORES NEGATIVOS \n\n");
	
	l=0;
	
	//calculo (NEGATIVOS)---------------------------------------------------------------------------------------------------------------------------
	
	
	do{
		
		for(f=0; f<exponente; f++){
				
			//primera vez (positivos)	
			if(f==0){
					
				calculo= (divisores_n[l]* x[f])+(x[f+1]);
				printf("(%i) (%iX^%i ",divisores_n[l],x[f],exponente-1);
				e= -2;
					
			}
			
			//es resto de veses
			else{
					
				calculo= (divisores_n[l]* calculo)+(x[f+1]);
				e--;
					
			}
			
			if((exponente+e)>0){
				
				if(calculo>0){
					
					printf("+%iX^%i ",calculo, exponente+e);
					
				}
				else{
					
					printf("%iX^%i ",calculo, exponente+e);
					
				}
				
			}
			else{
				
				if(calculo>0){
				
				printf("+%i)",calculo);
				
				}
				
				else if (calculo<0){
				
				printf("%i)",calculo);
				
				}
				
				if(calculo==0){
				
					if(divisores_n[l]<0){
					
					printf(" * (X+%i)  RESPUESTA",(-1)*divisores_n[l]);
					
					}
					else{
						
					printf(" * (X%i)  RESPUESTA",(-1)*divisores_n[l]);
						
					}
			}
				
			}
			

			
	
	    }
	    
	    printf("\n");
		
		calculo=0;
		e=0;
		
		l++;	
		
	}while(l<=exponente);
	
	
	printf("\n");
	printf("\n");
	
	system("pause");
	
	return 0;

	
}

