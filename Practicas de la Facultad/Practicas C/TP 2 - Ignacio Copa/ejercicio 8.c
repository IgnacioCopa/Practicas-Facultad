/*8.	Ingresar la edad y la altura de dos personas, indicar  e imprimir la estatura del de  mayor edad*/

#include<stdio.h>

int main(){
	
	int edad[2];
	float altura[2];
	
	//primera suma--------------------------------------------
	
	printf("Ingresar la edad y la altura de dos personas, indicar  e imprimir la estatura del de  mayor edad: ");
	printf("\n");
	
	printf("Introduzca la edad de la primera persona: ");
	scanf("%f",&edad[0]);
	
	printf("\n");
		
	printf("Introduzca la altura de la primera persona: ");
	scanf("%f",&altura[0]);
	
	printf("\n");
	
	//segunda suma--------------------------------------------
		
	printf("Introduzca la edad de la segunda persona: ");
	scanf("%f",&edad[1]);
	
	printf("\n");
		
	printf("Introduzca la altura de la segunda persona: ");
	scanf("%f",&altura[1]);
	
	printf("\n");
	
	//resolucion--------------------------------------------
	
	if(edad[0]>edad[1]){
		
		printf("la altura de la primera persona es: %f",altura[0]);
	}
	else if (edad[0]<edad[1]){
		
		printf("la altura de la segunda persona es: %f",altura[1]);
	}
	
	else if (edad[0]==edad[1]){
		
		printf("tienen la misma edad");
	}
	
}
