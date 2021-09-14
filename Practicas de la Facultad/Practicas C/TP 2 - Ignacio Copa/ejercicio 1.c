/*1.	Ingresar dos valores, indicar e imprimir si son iguales*/

#include <stdio.h>

int main(){
	
	float a,b;
	
	printf("Descubra si los valores son iguales: ");
	printf("\n");
	
	printf("Introduzca el primer valor (A): ");
	scanf("%f",&a);
	
	printf("\n");
		
	printf("Introduzca el primer valor (B): ");
	scanf("%f",&b);
	
	if(a==b){
		
		printf("\n");
		printf("Los valores A: %f y B: %f son iguales",a,b);
	}
	else{
		
		printf("Los valores A: %f y B: %f NO son iguales",a,b);
	}
	
	
}
