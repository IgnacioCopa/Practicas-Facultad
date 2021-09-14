/*7.	Ingresar dos valores, calcular su suma, su producto y la resta del 1ro menos el 2do valor ingresado, imprimir los resultados*/

#include<stdio.h>

int main(){
	
	float valor1, valor2, resultado[3];
	
	//corresponde al paso 1 del diagrama
	printf("calcule la suma, el producto y la resta del '1ro menos el 2do valor ingresado' \n\n");	 //instruccion que muestra al usuario para que sirve el programa
	
	//corresponde al paso 2 del diagrama
	printf("Ingrese el 1er valor: ");     									//muestra al usuario lo que tiene que introducir por pantalla
	scanf("%f",&valor1);													//el valor introducido por el usuario el almacenado en la variable asignada en este caso "valor1"
	printf("\n");
	
	//corresponde al paso 3 del diagrama
	printf("Ingrese el 2do valor: ");
	scanf("%f",&valor2);
	printf("\n");
	
	
	//corresponde al paso 4 del diagrama
	resultado[0]= (valor1 + (-valor2));												 //se realiza el calculo solicitado y se almacena en un (vector o array) en la posicion "0"
	printf("El resultado de la suma de los valores es: %f \n",resultado[0]);		//se imprime por pantalla al usuarioel valor del vector "resultado en la posicion 0"			 
	
	//corresponde al paso 5 del diagrama
	resultado[1]= (valor1 * (-valor2));
	printf("El resultado del producto de los valores es: %f \n",resultado[1]);
	
	//corresponde al paso 6 del diagrama
	resultado[2]= (valor1 - (-valor2));
	printf("El resultado de la resta de los valores es: %f \n",resultado[2]);
	
}
