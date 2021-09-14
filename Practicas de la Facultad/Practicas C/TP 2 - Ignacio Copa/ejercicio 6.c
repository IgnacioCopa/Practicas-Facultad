/*6.	Ingresar tres valores, sumarlos, calcular el promedio e indicar e imprimir cúal de estos valores es mayor al promedio */

#include <stdio.h>

int main(){
	
	float a,b,c,resultado;
	
	printf("Ingresar tres valores, sumarlos, calcular el promedio e indicar e imprimir cúal de estos valores es mayor al promedio: ");
	printf("\n");
	
	printf("Introduzca el primer valor (A): ");
	scanf("%f",&a);
	
	printf("\n");
		
	printf("Introduzca el segundo valor (B): ");
	scanf("%f",&b);
	
	printf("\n");
		
	printf("Introduzca el tercer valor (C): ");
	scanf("%f",&c);
	
	resultado=(a+b+c)/3;
		
	
	if(a>resultado){
		
		printf("\n");
		printf("El numero A= %f es mayor que el PROMEDIO= %f",a,resultado);
		
		if (b>resultado){
		
		printf("\n");
		printf("El numero B= %f es mayor que el PROMEDIO= %f",b,resultado);
		}
	
		if (c>resultado){
		
		printf("\n");
		printf("El numero C= %f es mayor que el PROMEDIO= %f",c,resultado);
		}
		
	}
	
	else if (b>resultado){
		
		printf("\n");
		printf("El numero B= %f es mayor que el PROMEDIO= %f",b,resultado);
		
		if (a>resultado){
		
		printf("\n");
		printf("El numero B= %f es mayor que el PROMEDIO= %f",b,resultado);
		}
	
		if (c>resultado){
		
		printf("\n");
		printf("El numero C= %f es mayor que el PROMEDIO= %f",c,resultado);
		}
		
	}
	
	else if (c>resultado){
		
		printf("\n");
		printf("El numero C= %f es mayor que el PROMEDIO= %f",c,resultado);
		
		if (a>resultado){
		
		printf("\n");
		printf("El numero B= %f es mayor que el PROMEDIO= %f",b,resultado);
		}
	
		if (b>resultado){
		
		printf("\n");
		printf("El numero C= %f es mayor que el PROMEDIO= %f",c,resultado);
		}
	}

	
	
}
