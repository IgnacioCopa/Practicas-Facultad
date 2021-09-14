/*4.	Ingresar dos valores y realizar e imprimir la resta del mayor menos el menor*/


#include <stdio.h>

int main(){
	
	float a,b,resultado;
	
	printf("Ingresar dos valores y realizar e imprimir la resta del mayor menos el menor: ");
	printf("\n");
	
	printf("Introduzca el primer valor (A): ");
	scanf("%f",&a);
	
	printf("\n");
		
	printf("Introduzca el segundo valor (B): ");
	scanf("%f",&b);
	
	
	if(a>b){
		
		printf("\n");
		resultado= a-b;
		printf("La resta de A= %f y B= %f es: %f",a,b,resultado);
		
	}
	else if (b>a){
		
		printf("\n");
		resultado= b-a;
		printf("la resta de B= %f y A= %f es: %f",b,a,resultado);
	}

	
	
}
