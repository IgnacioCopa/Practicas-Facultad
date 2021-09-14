/*3.	Ingresar dos valores y realizar e imprmir el producto si el 1ro es mayor al 2do, si son iguales solo indicarlo*/

#include <stdio.h>

int main(){
	
	float a,b,resultado;
	
	printf("Ingresar dos valores y realizar e imprmir el producto si el 1ro es mayor al 2do, si son iguales solo indicarlo: ");
	printf("\n");
	
	printf("Introduzca el primer valor (A): ");
	scanf("%f",&a);
	
	printf("\n");
		
	printf("Introduzca el segundo valor (B): ");
	scanf("%f",&b);	
	
	
	if(a>b){
		
		printf("\n");
		resultado= a*b;
		printf("El producto de A= %f y B= %f es: %f",a,b,resultado);
		
	}
	else if (a==b){
		
		printf("Los valores A: %f y B: %f son iguales",a,b);
	}
	
	else{
		
		printf("El valor A: %f es menor que B: %f",a,b);
	}
	
	
}
