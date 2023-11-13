//(12 ejercicios)
#include <stdio.h>
#include <math.h>
/*
EJERCICIO 1
-----------
Escribir una función que reciba el capital inicial, una tasa de interés y 
un número de años y devuelva el monto final a cobrar. La fórmula a utilizar es:
Cn = C*(1+x/100)^n
Donde 
 es el capital inicial, 
 es la tasa de interés y 
 es el número de años a calcular.*/
 long capital_final(int capital_inicial, float tasa_interes, int años){
    return capital_inicial*(1 + pow(tasa_interes/100, años));
 }
 /*int main(void){
    long capital_f = capital_final(100,0.1,20);
    printf("%ld\n",capital_f);
 }*/

 /*
 EJERCICIO 2
 -----------
 Escribir una función que convierta un valor en grados Fahrenheit a grados Celsius. 
 La fórmula que los relaciona es F = 9/5C + 32

 EJERCICIO 3
 -----------
 Escribir una función que convierta un valor en grados Celsius a grados Fahrenheit.
 */

int F_C(int C){
    return ((9*C)/5 + 32);
}

int C_F(int F){
    return ((F - 32)*5)/9;
}
/*int main(void){
    int grados = F_C(10);
    int gradosc = C_F(50);
    printf("10 grados en f: %i\n", grados);
    printf("al reves: %i\n", gradosc);
    return 0;
}*/

/*
EJERCICIO 4
-----------
⋆ Escribir una función que dadas la hora, minutos y segundos 
devuelva el tiempo en segundos */

int segundos(int horas, int minutos, int segundos){
    return horas*(60*60) + minutos*60 + segundos;
}
/*int main(void){
    printf("%i\n", segundos(2,2,2));
    return 0;
}*/

/*
EJERCICIO 5
-----------
Escribir una función que dadas las coordenadas de un vector en R3,
devuelva la norma del mismo. 
*/
#include <math.h>

double norma(int x, int y, int z){
    return sqrt(pow(x,2) + pow(y,2) + pow(z,2));//IMP ;
}
/*int main(void){
    printf("%f\n", norma(2,2,2)); //\n!!!!!
    return 0;
}*/

/*
EJERCICIO 6
-----------
Teniendo el radio de un cilindro y su altura escribir funciones que calculen:

El diámetro del cilindro.
La circunferencia.
El área de la base.
El volumen del cilindro.
El área del cilindro.
(Notar que algunas funciones pueden resolverse llamando a las ya programadas.)
*/
#include <math.h>

float diametro(float radio){
    return radio * 2;
}
float circunferencia(float radio){
    return 2*3.141592*radio;
}
float area_base(float radio){
    return 3.141592*pow(radio,2);
}
float volumen(float radio, int h){
    return 3.141592*pow(radio,2)*h;
}

float area_cilindro(float radio, int altura){
    return 2*3.141592*radio*altura + 2*area_base(radio);
}
/*
int main() {
    double radio = 5.0; 
    double altura = 10.0; 

    printf("Diámetro: %.2f\n", diametro(radio));
    printf("Circunferencia: %.2f\n", circunferencia(radio));
    printf("Área de la base: %.2f\n", areaBase(radio));
    printf("Volumen: %.2f\n", volumen(radio, altura));
    printf("Área lateral: %.2f\n", areaLateral(radio, altura));
    printf("Área total: %.2f\n", areaTotal(radio, altura));

    return 0;
}*/

/*
EJERCICIO 7
-----------
Escribir una función que dado un número entero devuelva 1 si el mismo es impar y 0 
si fuera par */
int par_impar(int num){
    if (num%2==0){
        return 0;
    }
    else{
        return 1;
    }
}
/*int main(void){
   printf("%i\n",par_impar(2)); 
}*/


/*
EJERCICIO 8
-----------
Escribir una función que dado un número devuelva el primer número múltiplo de 10 
inferior a él. Por ejemplo, para 153 debe devolver 150
*/

int inferior_mult10(int num){
    return (num/10)*10;
}
/*int main(void){
    printf("%i\n",inferior_mult10(153));
}*/

/*
EJERCICIO 9
-----------
 Escribir una función que compare (reciba) 2 números enteros a y b. 
 La función debe retornar un número menor, igual o mayor que cero si a es, 
 respectivamente, menor que, igual a, o mayor que b.
*/

//???????

/*
EJERCICIO 10
------------
Escribir una función que reciba un número entero y devuelva 1 
si el número es positivo y -1 si el número es negativo
*/
int positivo(int x){
    if (x>0){
        return 1;
    }
    else if (x<0){
        return -1;
    }
    else{
        return 0;
    }
}

/*
EJERCICIO 11
------------
Escribir una función que reciba un número entero y devuelva 1 si el número es positivo 
y 0 si el número es negativo.
*/

int positivo2(int x){
    if (x>=0){
        return 1;
    }
    else if (x<0){
        return 0;
    }
}

/*
EJERCICIO 12
------------
(ya lo hice antes)
*/