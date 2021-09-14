/*6.	Ingresar los lados de un rectángulo y calcular su diagonal principal, superficie y perímetro.imprima los resultados solicitados*/


#include<stdio.h>
#include<math.h>

int main(){
	
	float lado1, lado2, diagonal, perimetro, superficie;
	
	//corresponde al paso 1 del diagrama
	printf("calcule la diagonal, el perimetro y la superficie de un rectangulo! \n\n");	 //instruccion que muestra al usuario para que sirve el programa
	
	//corresponde al paso 2 del diagrama
	printf("Ingrese el valor del lado (horizontal): ");     			//muestra al usuario lo que tiene que introducir por pantalla
	scanf("%f",&lado1);													//el valor introducido por el usuario el almacenado en la variable asignada en este caso "lado1"
	printf("\n");
	
	//corresponde al paso 3 del diagrama
	printf("Ingrese el valor del lado (vertical): ");
	scanf("%f",&lado2);
	printf("\n");
	
	//corresponde al paso 4 del diagrama
	diagonal= sqrt(pow(lado1,2)+pow(lado2,2));			//en la variable "diagonal" se calcula a partir de la formula de pitagoras y se almacena su resultado dado que su diagonal forma 2 triangulos rectangulos


	//corresponde al paso 5 del diagrama
	perimetro=(lado1*2)+(lado2*2);							//en la variable "perimetro" se almacena la suma de las variables "lado1 con lado2" mabas multiplicadas X2 ya que su lado opuesto mide lo mismo
	
	
	//corresponde al paso 6 del diagrama
	superficie= (lado1*lado2);								//en la variable "superficie" se realiza la formula del area de un rectangulo y se almacena su resultado
	

	//corresponde al paso 7 del diagrama
	printf("La diagonal del rectangulo es: %f (cm) \n", diagonal);      //se imprime por pantalla al usuario el "diagonal" del rectangulo
		
	//corresponde al paso 8 del diagrama
	printf("El perimetro del rectangulo es: %f (cm) \n", perimetro);      //se imprime por pantalla al usuario el "perimetro" del rectangulo
	
	//corresponde al paso 9 del diagrama
	printf("La superficie del rectangulo es: %f (cm2) \n", superficie);      //se imprime por pantalla al usuario el "superficie" del rectangulo
	
	printf("\n\n");
	
	system("pause");
	return 0;
}
