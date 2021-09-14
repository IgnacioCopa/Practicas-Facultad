#include<stdio.h>

int main(){
	
	int valor1, valor2, resultado;
	
	//corresponde al paso 1 del diagrama
	printf("Ingrese el primer valor: ");     	//muestra al usuario lo que tiene que introducir por pantalla
	scanf("%i",&valor1);						//el valor introducido por el usuario el almacenado en la variable asignada en este caso "valor1"
	printf("\n");
	
	//corresponde al paso 2 del diagrama
	printf("Ingrese el segundo valor: ");
	scanf("%i",&valor2);
	printf("\n");
	
	//corresponde al paso 3 del diagrama
	resultado=valor1+valor2;					//en la variable "resultado" se almacena la suma de las variables "valor1 con valor2" 
	
	//corresponde al paso 4 del diagrama
	printf("El resultado de la suma de los valores es: %i", resultado);      //se imprime por pantalla al usuario el "resultado" de la suma
	
	printf("\n\n");
	
	system ("pause");
	
	return 0;
}
