/*8.	Ingresar el valor de la hora y el tiempo trabajado por un operario, calcular su sueldo e imprimirlo*/

#include<stdio.h>

int main(){
	
	float valor_hora, valor_min, valor_seg, sueldo;
	
	int hs_t, min_t, seg_t;
	
	//corresponde al paso 1 del diagrama
	printf("calculador de sueldos de empleados \n\n");	 						//instruccion que muestra al usuario para que sirve el programa
	
	//corresponde al paso 2 del diagrama
	printf("Ingrese el valor del costo por 'hora' de trabajo: ");     			//muestra al usuario lo que tiene que introducir por pantalla
	scanf("%f",&valor_hora);													//el valor introducido por el usuario el almacenado en la variable asignada en este caso "valor_hora"
	printf("\n");
	
	
	//corresponde al paso 3 del diagrama
	printf("Ingrese tiempo trabajado por 'un operario en (hs)': ");
	scanf("%i",&hs_t);
	printf("\n");
	
	
	//corresponde al paso 4 del diagrama(desde aca)------------------{
	do{																			//empieza con una primera interaccion con el bucle y termina solo si el usuario no cumple la condicion de la misma
		
	//corresponde al paso 5 del diagrama
	printf("Ingrese tiempo trabajado por 'un operario en (min)': ");			//tiempo que trabajo el operador				
	scanf("%i",&min_t);
	printf("\n");
	
	//corresponde al paso 6 del diagrama
	if(min_t >= 60 ){
		
		printf("los minutos no pueden ser mayor que 59 \n");					//si el valor de la variable "min_t" es mayor o igual a 60 se imprime el texto por pantalla
	}
	
		
	}while(min_t >= 60);//corresponde al paso 4 del diagrama(hasta aca)------------------}
	
	
	
	
	//corresponde al paso 7 del diagrama(desde aca)------------------{
	do{
		
	//corresponde al paso 8 del diagrama
	printf("Ingrese tiempo trabajado por 'un operario en (seg)': ");
	scanf("%i",&seg_t);
	printf("\n");
	
	//corresponde al paso 9 del diagrama
	if(min_t >= 60 ){
		
		printf("los segundos no pueden ser mayor que 59 \n");
	}
	
	
	}while(seg_t >= 60);//corresponde al paso 7 del diagrama(hasta aca)------------------}

	

	
	
	//corresponde al paso 10 del diagrama
	valor_min= valor_hora/60;								// se realiza el calculo del valor de las horas dividido 60 para obtener el "valor del costo por minuto" y se almacena en valor_min
	
	//corresponde al paso 11 del diagrama
	valor_seg= valor_min/60;								// se realiza el calculo del valor de los minutos dividido 60 para obtener el "valor del costo por segundo" y se almacena en valor_seg
	
	
	//corresponde al paso 12 del diagrama
	sueldo= (valor_hora* hs_t) + (valor_min * min_t) + (valor_seg * seg_t);		//para calcular el sueldo se suman los totales de los costos por (unidades de tiempo) y se multiplican por el (tiempo trabajado)
																				//luego se almacena en la variable "sueldo"
	
	//corresponde al paso 13 del diagrama
	printf("El sueldo del operador es de: $%f ",sueldo);		//se imprime por pantalla al usuario el calculo del "sueldo por un operador"
	
	
	
	
	
	
	system ("pause");
	return 0;
}
