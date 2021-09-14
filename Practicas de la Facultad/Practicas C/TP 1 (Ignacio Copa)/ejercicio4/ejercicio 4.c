/*4.	Ingresar los lados de un triángulo calcular su perímetro e imprimirlo*/


#include<stdio.h>

int main(){
	
	float lado1, lado2, lado3, perimetro;
	
	//corresponde al paso 1 del diagrama
	printf("calcule el perimetro de un triangulo! \n\n");	 //instruccion que muestra al usuario para que sirve el programa
	
	//corresponde al paso 2 del diagrama
	printf("Ingrese el valor del 1er lado: ");     			//muestra al usuario lo que tiene que introducir por pantalla
	scanf("%f",&lado1);										//el valor introducido por el usuario el almacenado en la variable asignada en este caso "lado1"
	printf("\n");
	
	//corresponde al paso 3 del diagrama
	printf("Ingrese el valor del 2do lado: ");
	scanf("%f",&lado2);
	printf("\n");
	
	//corresponde al paso 4 del diagrama
	printf("Ingrese el valor del 3er lado: ");
	scanf("%f",&lado3);
	printf("\n");
	
	//corresponde al paso 5 del diagrama
	perimetro=lado1+lado2+lado3;					//en la variable "perimetro" se almacena la suma de las variables "lado1 con lado2 con lado3"
	
	
	//corresponde al paso 6 del diagrama
	printf("El perimetro del triangulo es: %f (cm)", perimetro);      //se imprime por pantalla al usuario el "perimetro" del triangulo
	
	printf("\n\n");
	
	system("pause");
	return 0;
}
