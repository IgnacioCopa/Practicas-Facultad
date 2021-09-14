/*10.	Una concesionaria de autos desea liquidar el sueldo a cada vendedor pagando $ 500 por mes más un plus del 10 % del precio sobre cada vehículo vendido
y un valor constante de 50 pesos por cada uno de ellos, se ingresa el valor del vehiculo y cuantos vehiculos dee ese tipo vendio, calcular su sueldo e imprimirlo*/


#include<stdio.h>

//corresponde al paso 1 del diagrama
#define SOLD_CAR 50														//se define una constante (valor que no cambiara a lo largo del programa);

int main(){
	
	int mes;
	int cant_vehiculos;
	
	
	float plus_10;
	float valor_vehiculo;
	float sueldo;
	
	//corresponde al paso 2 del diagrama
	printf("ingrese el valor del vehiculo vendido: $");						//muestra al usuario lo que tiene que introducir por pantalla
	scanf("%f",&valor_vehiculo);											//el valor introducido por el usuario el almacenado en la variable asignada en este caso "valor_vehiculo"
	printf("\n");
	
	//corresponde al paso 3 del diagrama
	printf("ingrese la cantidad de vehiculos vendidos: ");
	scanf("%i",&cant_vehiculos);
	printf("\n");
	
	//corresponde al paso 4 del diagrama
	mes=500;
	
	//corresponde al paso 5 del diagrama
	plus_10= ((valor_vehiculo*10)/100)*cant_vehiculos;					//se toma el 10% del valor del vehiculo de la variable "valor_vehiculo" y se multiplica por la cantidad de "cant_vehiculos"					
	
	//corresponde al paso 6 del diagrama								
	sueldo= mes + plus_10 + (SOLD_CAR * cant_vehiculos);				//se suma el valor del "mes" + el plus del 10% + la constante multiplicado por la cantidad de vehiculos y se almacena en "sueldo"	
	
	//corresponde al paso 7 del diagrama
	printf("El sueldo del vendedor es: $%f \n",sueldo);					//se imprime por pantalla el sueldo del vendedor
	
	system("pause");
	
	return 0;
	
	
} 
