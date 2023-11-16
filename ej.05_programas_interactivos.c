#include <stdio.h>
//(11 ejercicios)

//? EJERCICIO 1
// Escribir un programa que calcule el inverso y la raíz de un número ingresado por teclado. 
// Realice las validaciones necesarias.
// Nota: puede elegir entre NO calcular la raíz de números negativos o mostrar un valor complejo.

int inverso(){
    int num;
    scanf("%d", &num);
    return 1/(num *-1);
}

int main(void){
    int x = inverso();
    printf("%d\n", x);
    return 0;
}
//? EJERCICIO 2
// Escribir un programa que dado un día del año (1 a 366) ingresado por el usuario, 
// imprima el día de la semana que le corresponde. Debe suponer que el año comenzó, por ejemplo, un domingo. 
// Por ejemplo: si se ingresa ‘5’, imprime ‘jueves’, si se ingresa ‘10’ imprime ‘martes’, si se ingresa ‘294’ 
// imprime ‘sábado’.

//? EJERCICIO 3
// Escribir un programa que convierta una cantidad de segundos ingresada por teclado a horas, minutos y segundos. 
// Realice las validaciones necesarias.

//? EJERCICIO 4
// Escribir un programa que cuente la cantidad de líneas ingresadas por stdin hasta el ingreso de EOF. 
// Al finalizar, muestre el resultado por pantalla.
    // Note: si el archivo del código fuente del programa se llama cuenta_lineas.c y se compila en el binario cuenta_lineas, 
    // ejecute el programa del siguiente modo: cat cuenta_lineas.c | ./cuenta_lineas