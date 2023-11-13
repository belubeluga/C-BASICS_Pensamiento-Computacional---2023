//(10 ejercicios)
#include <stdio.h> ////IMP!!!
/*
EJERCICIO 1
-----------
Escribir una función que dados dos números x e y imprima:

x es mayor que y, si x es mayor que y,
x e y son iguales, si los números son iguales. */

/*void mayor(int x, int y){
    if (x>y){
        printf("%d es mayor que %d\n", x,y);
    }
    else if (y>x){
        printf("%d es mayor que %d\n", y,x);
    }
    else{
        printf("x e y son iguales.\n");
    }
}*/

/*int main(void){
    mayor(7,8);
    return 0;
}*/

/*
EJERCICIO 2
-----------
Escribir una función que dado un número entero devuelva su valor absoluto
*/

/*int abs(int x){
    if (x<0){
        return -x;
    }
    else{
        return x;
    }
}*/

/*
EJERCICIO 3
-----------
Escribir una función que dada una dimensión imprima la matriz identidad de esa dimensión
*/

/*void MId(int dim){
    for (int i = 0; i < dim; i++) {
        for (int j = 0; j < dim; j++) {
            if (i == j) {
                printf("1 ");
            } else {
                printf("0 ");
            }
        }
        printf("\n");
    }
}*/

/*
EJERCICIO 4
-----------
Escribir un programa que calcule las 2 raíces de un polinomio de segundo grado 
(de la forma ax^2 + bx + c). Validar las operaciones a realizar 
(no dividir por cero ni calcular la raíz de un número negativo, o imprimir 
la raíz compleja).
*/
#include <math.h>
/*
void raices(float a, float b, float c){
    float discriminante = (pow(b,2) - 4*a*c);
    if (a == 0) {
        puts("No se puede dividir por 0");
    } else if (discriminante < 0) {
        puts("No existen raices reales");
    } else {
        float raiz_a = (-b + sqrt(discriminante)) / (2*a);
        float raiz_b = (-b - sqrt(discriminante)) / (2*a);
        printf("raiz 1: %f\nraiz 2: %f\n", raiz_a, raiz_b);
    }
}

int main(void) {
    float a, b, c;

    printf("Ingrese los coeficientes a, b y c del polinomio de segundo grado (ax^2 + bx + c): ");
    scanf("%f %f %f", &a, &b, &c);

    raices(a, b, c);

    return 0;
}
*/

/*
EJERCICIO 5
-----------
Escribir una función que dadas dos rectas definidas por su pendiente y 
su ordenada al origen devuelva la abscisa en la que se intersecan. 
Validar lo que considere necesario
*/

/*void interseccion(int m1, int c1, int m2, int c2 ){
    int x_interseccion = (c2 - c1) / (m1 - m2);

    // Calcular la ordenada de la intersección
    int y_interseccion = m1 * x_interseccion + c1;

    printf("raices= %i, %i", x_interseccion,y_interseccion);

}

int main(void){
    interseccion(3,2,2,3);
    return 0;
}*/


//************************************************************************************
/*
EJERCICIO 6
-----------
*/


/*
EJERCICIO 7
-----------
*/

/*
EJERCICIO 8
-----------
*/

/*
EJERCICIO 9
-----------
*/

/*
EJERCICIO 10
-----------
*/