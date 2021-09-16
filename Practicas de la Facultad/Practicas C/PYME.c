/*una PYME tiene N empleados, de ellos conoce su DNI, APELLIDO Y SUELDO
se desea saber
1.total a pagar por sueldos
2.sueldo promedio
3. quien cobro el sueldo mayor

DATOS.................dni, apellido, sueldo
RTA...................
PROCESOS..............
CICLO.................
*/

#include<stdio.h>
#include<string.h>

int main(){
	
	int empleados, i,j;
	float totalsueldos=0, sueldoPromedio, aux=0;
	char caracteres[50], apellidos_totales[100];
	
	printf("Introduce la cantidad de empleados: ");
	scanf("%i",&empleados);
	
	int dni[empleados];
	float sueldo[empleados]; 
	char apellido[empleados][50]; 
	
	for(i=0;i<empleados;i++){
		
		printf("\n");
		
		printf("Ingrese el DNI del empleado: ");
		scanf("%i",&dni[i]);
		
		printf("Ingrese el Apellido del empleado: ");
		fflush(stdin);
		gets(caracteres);
		strcpy(apellido[i],caracteres);
		
		printf("Ingrese el sueldo del empleado: ");
		scanf("%f",&sueldo[i]);
		
		
		if(sueldo[i]>aux){
			
			aux=sueldo[i];
			j=i;
			
			strcpy(apellidos_totales,apellido[i]);
		}
		else if(sueldo[i]>=aux){
			
			strcat(apellidos_totales,", ");
			strcat(apellidos_totales,apellido[i]);
		}
		
		totalsueldos+=sueldo[i];
		
		sueldoPromedio= totalsueldos/empleados;	

	}
	
	
	
	printf("\nTotal a pagar por sueldos: %0.2f",totalsueldos);
	
	printf("\nSueldo Promedio: %0.2f",sueldoPromedio);
			
	printf("\nSueldo Maximo: %0.2f cobrado por %s",sueldo[j],apellidos_totales);	
	
}
