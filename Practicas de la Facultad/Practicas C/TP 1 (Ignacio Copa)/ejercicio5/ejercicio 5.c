/*5.	Ingresar dos lados de un triángulo rectángulo y calcular, la hipotenusa, el perímetro, la superficie.imprima los resultados solicitados*/

#include<stdio.h>
#include<math.h>

int main(){
	
	float lado1, lado2, hipotenusa, perimetro, superficie;
	
	//corresponde al paso 1 del diagrama
	printf("calcule la hipotenusa, el perimetro y la superficie de un triangulo rectangulo! \n\n");	 //instruccion que muestra al usuario para que sirve el programa
	
	//corresponde al paso 2 del diagrama
	printf("Ingrese el valor del 1er lado: ");     			//muestra al usuario lo que tiene que introducir por pantalla
	scanf("%f",&lado1);										//el valor introducido por el usuario el almacenado en la variable asignada en este caso "lado1"
	printf("\n");
	
	//corresponde al paso 3 del diagrama
	printf("Ingrese el valor del 2do lado: ");
	scanf("%f",&lado2);
	printf("\n");
	
	//corresponde al paso 4 del diagrama
	hipotenusa= sqrt(pow(lado1,2)+pow(lado2,2));			//en la variable "hipotenusa" se calcula la formula de pitagoras y se almacena su resultado


	//corresponde al paso 5 del diagrama
	perimetro=lado1+lado2+hipotenusa;							//en la variable "perimetro" se almacena la suma de las variables "lado1 con lado2 con la hipotenusa"
	
	
	//corresponde al paso 6 del diagrama
	superficie= (lado1*lado2)/2;								//en la variable "superficie" se realiza la formula del area de un triangulo y se almacena su resultado
	

	//corresponde al paso 7 del diagrama
	printf("La hipotenusa del triangulo es: %f (cm) \n", hipotenusa);      //se imprime por pantalla al usuario el "hipotenusa" del triangulo
		
	//corresponde al paso 8 del diagrama
	printf("El perimetro del triangulo es: %f (cm) \n", perimetro);      //se imprime por pantalla al usuario el "perimetro" del triangulo
	
	//corresponde al paso 9 del diagrama
	printf("La superficie del triangulo es: %f (cm2) \n", superficie);      //se imprime por pantalla al usuario el "superficie" del triangulo
	
	printf("\n\n");
	
	system("pause");
	return 0;
}
