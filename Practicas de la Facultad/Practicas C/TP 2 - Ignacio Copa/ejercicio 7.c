/*7.	Ingresar cuatro valores, sumar el 1ro y el 2do, el 3ro y el 4to, indicar e imprimir cúal de esta sumas es mayor*/

#include<stdio.h>

int main(){
	
	float a,b,c,d,resultado1,resultado2;
	
	//primera suma--------------------------------------------
	
	printf("Ingresar cuatro valores, sumar el 1ro y el 2do, el 3ro y el 4to, indicar e imprimir cúal de esta sumas es mayor: ");
	printf("\n");
	
	printf("Introduzca el primer valor (A): ");
	scanf("%f",&a);
	
	printf("\n");
		
	printf("Introduzca el segundo valor (B): ");
	scanf("%f",&b);
	
	printf("\n");
	
	resultado1=a+b;
	
	//segunda suma--------------------------------------------
		
	printf("Introduzca el tercer valor (C): ");
	scanf("%f",&c);
	
	
	printf("\n");
		
	printf("Introduzca el cuarto valor (D): ");
	scanf("%f",&d);
	
	printf("\n");
	
	resultado2=c+d;
	
	if(resultado1>resultado2){
		
		printf("la suma de %f + %f = %f es mayor que la suma %f + %f = %f",a,b,resultado1,c,d,resultado2);
	}
	else if (resultado1<resultado2){
		
		printf("la suma de %f + %f = %f es mayor que la suma %f + %f = %f",c,d,resultado2,a,b,resultado1);
	}
	
	else if (resultado1==resultado2){
		
		printf("la suma de %f + %f = %f es igual que la suma %f + %f = %f",c,d,resultado2,a,b,resultado1);
	}
	
}
	
