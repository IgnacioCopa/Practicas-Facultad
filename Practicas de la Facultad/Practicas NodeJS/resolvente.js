//verificar respuestas en ecuaciones de segundo grado
const readline = require ("readline");

const rl= readline.createInterface(process.stdin,process.stdout);
var values = [];

console.log("Respuesta de Ecuaciones de segundo grado aX^2+bX+C: ");
console.log("");

rl.on('line',(res)=>{

    if(values.length==0){
        console.log("introduzca el valor de a: ");
        values.push(parseFloat(res));
    }
    
    else if(values.length==1){
        console.log("introduzca el valor de b: ");
        values.push(parseFloat(res));
    }
    
    else if(values.length==2){
        console.log("introduzca el valor de c: ");
        values.push(parseFloat(res));
    
        //calculo
        let x1 = (-values[1] + Math.sqrt( (Math.pow(values[1],2)-4*(values[0]*values[2]) ))) / (2*values[0]);
        let x2 = (-values[1] - Math.sqrt( (Math.pow(values[1],2)-4*(values[0]*values[2]) ))) / (2*values[0]);
    
        //resultado
        console.log("");
        console.log(`el resultado de x1 es: ${x1}`);
        console.log(`el resultado de x2 es: ${x2}`);
    
        process.exit();
    }
    


})

/*
let a=prompt("introduzca el valor de a: "); // toma el valor por consola
a= parseFloat(a); // lo convierte en un entero;

let b=prompt("introduzca el valor de b: "); // toma el valor por consola
b= parseFloat(b); // lo convierte en un entero;

let c=prompt("introduzca el valor de c: "); // toma el valor por consola
c= parseFloat(c); // lo convierte en un entero;

let x1 = (-b + Math.sqrt( (Math.pow(b,2)-4*(a*c) ))) / (2*a);
let x2 = (-b - Math.sqrt( (Math.pow(b,2)-4*(a*c) ))) / (2*a);

console.log("");
console.log(`el resultado de x1 es: ${x1}`);
console.log(`el resultado de x2 es: ${x2}`);
*/

