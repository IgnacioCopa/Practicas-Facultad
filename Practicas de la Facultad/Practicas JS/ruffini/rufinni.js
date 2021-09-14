/*ruffini by copiña*/

var exponente,terminos, divisores_p=[],divisores_n=[], resultado=[], divisibles, posicion=0;
var calculo=0;
var x=[] ,xN=[], i=0, j, k=0, z;

//el exponente mas alto-----------------------------------------------------------------------------------------------------
console.log("Calcule ruffini: ");

exponente=prompt("introduzca el numero de exponente mas alto en (X^): ");
console.log(`\nExpoenente: ${exponente}`);
exponente= parseInt(exponente);

terminos= exponente;

//terminos que se seleccionan para la operacion (coeficiente y termino independiente)---------------------------------------------------
do{
		
	if(terminos!=0){
			
	x[posicion]=prompt(`introduzca el valor del coeficiente (X^${terminos}) termino: `);
    console.log(`Coeficiente: ${x[posicion]}X^${terminos}`);
	x[posicion]= parseInt(x[posicion]);
			
	}
	else{
    x[posicion]=prompt(`introduzca el 'termino independiente': `);
    console.log(`Termino independiente: ${x[posicion]}`);
	x[posicion]= parseInt(x[posicion]);
			
	}
	

	xN[posicion]=x[posicion];
		
	posicion++;
	terminos--;
		
		
}while(posicion<=exponente);


//los divisores del termino independiente------------------------------------------------------------------------------------------------

console.log("\n");

	//en caso de que el termino independiente sea negativo
	
	if(x[exponente]<=0){
		
		xN[exponente]=((-1)*x[exponente]);
	}
	
	//positivos
	for(j=1 ; j<=xN[exponente] ; j++){
		
		divisibles= (xN[exponente]%j);
		
		if(divisibles==0){
			
			console.log(`El numero ${xN[exponente]} es divisible por ${j}\n`);
			divisores_p[i]=j;
			
			i++;
		}
	}
	
	//negativos
	for(n=0; n<xN.length ;n++){
		
		divisores_n[n]= ((-1)*divisores_p[n]);
		console.log(`El numero ${xN[exponente]} es divisible por ${divisores_n[n]} \n`);
		
	}
	
	console.log("\n");
	console.log("\n");

	console.log("CALCULO DIVISORES POSITIVOS \n\n");

//calculo (POSITIVOS)--------------------------------------------------------------------------------------------------------------------------------------

do{
for(f=0; f<xN.length-1; f++){

//primera vez (positivos)	
if(f==0){
				
	calculo= (divisores_p[k]* x[f])+(x[f+1]);

	resultado.push(`${calculo}X^${exponente-f-2}`);
						
}

//es resto de veses
else{
					
	calculo= (divisores_p[k]* calculo)+(x[f+1]); //------------- divisores=0 CAMBIAR , hacer un simbolo +, - imprimir segun calculo

	if((exponente-f-2)<1){
		resultado.push(`${calculo}`);
	}
	else{
		resultado.push(`${calculo}X^${exponente-f-2}`);
	}
	
						
}

}

if(calculo==0 && (exponente-f-2)<0){

	
	resultado.pop();

	console.log(`(${x[0]}X^${exponente-1} ${resultado}) * (X ${(-1)*divisores_p[k]})  RESPUESTA`);
	

}
else{

	if((exponente-f-2)<0){
		resultado.pop();
	}

	console.log(`(${x[0]}X^${exponente-1} ${resultado}) * (X ${(-1)*divisores_p[k]}) `);

}

k++;
calculo=0;

for(z=0; z<=100;z++){
	resultado.pop();
}


}while(k<=xN.length-2);

k=0;

console.log("\n");
console.log("\n");
console.log("\n");

console.log("CALCULO DIVISORES NEGATIVOS \n\n"); //-------------------------------------------------------------------------

do{
	for(f=0; f<xN.length-1; f++){
	
	//primera vez (positivos)	
	if(f==0){
					
		calculo= (divisores_n[k]* x[f])+(x[f+1]);
	
		resultado.push(`${calculo}X^${exponente-f-2}`);
							
	}
	
	//es resto de veses
	else{
						
		calculo= (divisores_n[k]* calculo)+(x[f+1]); //------------- divisores=0 CAMBIAR , hacer un simbolo +, - imprimir segun calculo
	
		if((exponente-f-2)<1){
			resultado.push(`${calculo}`);
		}
		else{
			resultado.push(`${calculo}X^${exponente-f-2}`);
		}
		
							
	}
	
	}
	
	if(calculo==0 && (exponente-f-2)<0){
	
		
		resultado.pop();
	
		console.log(`(${x[0]}X^${exponente-1} ${resultado}) * (X+${(-1)*divisores_n[k]})  RESPUESTA`);
		
	
	}
	else{
	
		if((exponente-f-2)<0){
			resultado.pop();
		}
	
		console.log(`(${x[0]}X^${exponente-1} ${resultado}) * (X+${(-1)*divisores_n[k]}) `);
	
	}
	
	k++;
	calculo=0;
	
	for(z=0; z<=100;z++){
		resultado.pop();
	}
	
	
	}while(k<=xN.length-2);

