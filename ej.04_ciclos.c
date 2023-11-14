#include <stdio.h> //!NO OLVIDAR 
#include <math.h>
//(10 ejercicios)

//?EJERCICIO 1
// Escribir un programa que imprima la tabla de multiplicar del número 7.

void mult_7(int max){
    for(int y=0; y<max; y+=7){
        printf("%d\n",y);
    }
}

//?EJERCICIO 2
// Escribir un programa que imprima la tabla de multiplicar para los números del 1 al 10.
void mult_n(int max, int num){
    for(int y=0; y<max; y+=num){
        printf("%d\n",y);
    }
}

//?EJERCICIO 3
//Escribir un programa que imprima la tabla de conversión de Celsius a Fahrenheit para 
//los valores de 0ºC a 100ºC de 10 en 10 con 2 decimales.
//! hacer

//? EJERCICIO 4
// Escribir un programa que imprima por pantalla todas las fichas del dominó, sin repetir.
//! hacer

//? EJERCICIO 5
// El algoritmo babilonio para calcular la raíz cuadrada de un número N consta de los siguientes pasos:
// Se propone que el resultado de la raíz X vale un valor arbitrario, por ejemplo N
// Se inicializa Y en 1.
// Mientras que la diferencia entre X e Y sea superior a nuestro margen de error:
    // El nuevo valor de X se calcula como el promedio entre X e Y.
    // El nuevo valor de Y se calcula como N/X.

int algoritmo_babilonio(int N){
    int x = N;
    int y = 1;
    int margen_error = 2;
    while ((x - y) > margen_error || (y-x)> margen_error){
        x = (x + y)/2;
        y = N/x;
    }
    return x;
}


//? EJERCICIO 6
// Escribir funciones que calculen:

// Factorial: 
int factorial(int n){
    if ((n==0) || (n==1)) {return 1;} else {return n*factorial(n-1);}
}

// Número de Euler:
float euler(){
    float euler = 1.0;
    for(int e = 1.0;(e<10);e++){
        euler += 1.0 / factorial(e);
    }
    return euler;
}

//Exponencial:
float exponencial(void){
    float Ex = 1;
    for (float x = 1.0; (x < 10); x++){ //! ; 
        Ex += x/factorial(x);
    }
    return Ex;
}

//! Tetración: hacer

//? EJERCICIO 7
// Escribir una funcion que calcule los coeficientes binomiales
float coeficientes_binomiales(int n, int k){
    return factorial(n)/ (factorial(k)*factorial(n-k));
}

//? EJERCICIO 8
// Escribir una función void desarrollar_binomio(int n); que imprima los términos a calcular. 
//Por ejemplo, para desarrollar_binomio(3); la misma debe imprimir:

void desarrollar_binomio(int n){
    int coeficiente = 1;

    printf("(x + y)^%d =", n);

    for (int i = 0; i <= n; i++) {
        printf(" %+d.x^%d.y^%d", coeficiente, n - i, i);
        coeficiente = coeficiente * (n - i) / (i + 1);}

    printf("\n");
}


//? EJERCICIO 9
// Escribir una función que dado un número entero lo imprima espejado. Por ejemplo: 123456 se imprime como 654321.
void reverso(int numero){
    int digito;
    while(numero>0){
        digito = numero%10;
        printf("%d", digito);
        numero = numero/10;
    }
    printf("\n");
}

//? EJERCICIO 10
//6 = 6^1 = 6
//371 = 3^3 + 7^3 + 1^3 = 371
//Escribir una función que determine si un número dado es narcisista y lo indique imprimiendo un texto.

int cantidad_digitos(int num){
    int digitos = 1;
    while(num>9){
        num /= 10;
        digitos ++;
    }
    return digitos;
}

int narcisista(int num){
    int original = num;
    int e = cantidad_digitos(num);
    int suma_potencias = 0;
    while(num>0){suma_potencias += pow(num%10,e);num /= 10;}
    if (suma_potencias==original){printf("Narcisista\n");return 1;}
    else{printf("No narcisista\n");return 0;}
}


int main(void){
    // EJ 1: mult_7(100);
    // EJ 2: mult_n(50,2);
    // EJ 5: int x = algoritmo_babilonio(25);
    // EJ 6: int x = factorial(4);
    // float x = exponencial(); 
    // reverso(1234);
    // int x = cantidad_digitos(12345678);
    narcisista(371);
    // printf("%d\n", x);
    return 0;
}