/*2.	Ingresar un valor indicar e imprmir si es positivo, negativo o cero*/


#include <stdio.h>

int main(){
	
	float a;
	
	printf("Descubra si el numero es (positivo, negativo, o cero): ");
	printf("\n");
	
	printf("Introduzca el primer valor (A): ");
	scanf("%f",&a);
	
	printf("\n");


	if(a==0){
		
		printf("\n");
		printf("el valor ingresado es: 0");
	}
	
	else if (a>0){
		
		printf("\n");
		printf("el valor ingresado %f es positivo",a);
	}
	
	else if (a<0){
		
		printf("\n");
		printf("el valor ingresado %f es negativo",a);
	}
	
}
