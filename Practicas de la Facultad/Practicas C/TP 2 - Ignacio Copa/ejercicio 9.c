/*9.	Ingresar el valor de la hora y el tiempo trabajado por un empleado, calcular su sueldo conociendo que recibe un premio de $ 100
si trabajo más de 50 hs y  si trabajo más de 150 hs le dan otros $ 100  adicionales.imprimir el sueldo*/


#include <stdio.h>

int main(){
	
	float valor_hs,valor_min,valor_seg, sueldo; 
	int hs,min,seg;
	
	
	printf("calcular sueldo de empleado: ");
	printf("\n");
	
	printf("valor de la hora de trabajo: ");
	scanf("%f",&valor_hs);
	
	printf("\n");
		
	printf("tiempo trabajado en horas: ");
	scanf("%i",&hs);
	
	printf("");
	
	
	
	do{
		printf("tiempo trabajado en minutos: ");
		scanf("%i",&min);
	
		if(min>= 60){
			
			printf("\n Los minutos no pueden ser mayor a 59");
			printf("\n");
		}
		
	}while(min>= 60);


	printf("");
	
	do{
		
		printf("tiempo trabajado en segundos: ");
		scanf("%i",&seg);
	
	
		if(seg>= 60){
			
			printf("\n Los segundos no pueden ser mayor a 59");
			printf("\n");
		}
		
	}while(seg>= 60);
	


	
	
	valor_min= valor_hs/60;
	valor_seg= valor_min/60;
	
	sueldo= (valor_hs*hs)+(valor_min*min)+(valor_seg*seg);
	
	if( hs>50 || (hs>50 && min>0) || (hs>50 && seg>0) || (hs>50 && min>0 && seg>0)){
		
		sueldo+=100;
			
			if(hs>150 || (hs>150 && min>0) || (hs>150 && seg>0) || (hs>150 && min>0 && seg>0)){
				
				sueldo+=100;
				
			}
	}
	
	printf("\n");
	printf("El sueldo del empleado es: %f",sueldo);
	
	
	
	
}
