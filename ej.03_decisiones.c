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
//!terminar
/*
EJERCICIO 6
-----------
Escribir funciones que resuelvan los siguientes problemas:
Dada una fecha, indicar los días que faltan hasta fin de año.
Dada una fecha, indicar la cantidad de días transcurridos en ese año hasta esa fecha.
Dadas dos fechas (día1, mes1, año1, día2, mes2, año2), indicar el tiempo transcurrido entre ambas, en años, meses y días.
*/

//Dado un año indicar si es bisiesto.
int bisiesto(int año){
    if (año%4 == 0){
        if (año%100 == 0){
            if (año%400 == 0){
                return 1;
            }
            return 0;
        }
        else {return 1;}
    }
    else {return 0;}
}

int es_bisiesto(int año) {
    // Un año es bisiesto si es divisible por 4
    // Pero no es bisiesto si es divisible por 100
    // A menos que también sea divisible por 400
    return (año % 4 == 0 && año % 100 != 0) || (año % 400 == 0);
}

//Dado un mes y un año, devolver la cantidad de días correspondientes.
int cantidad_dias(int año, int mes, int dia){
    int dias = 0;
    if (mes>1){
        dias += 31;
    }
    if (mes>2){
        if (es_bisiesto(año)== 1){dias+=29;}
        else{ dias += 28;}}
    if (mes>3){
        dias += 31;}
    if (mes>4){
        dias += 30;}
    if (mes>5){
        dias += 31;}
    if (mes>6){
        dias += 30;}
    if (mes>7){
        dias += 31;}
    if (mes>8){
        dias += 31;}
    if (mes>9){
        dias += 30;}
    if (mes>10){
        dias += 31;}
    if (mes>11){
        dias += 30;}
    return dias + dia;
    
}
//Dada una fecha (día, mes, año), indicar si es válida o no. (salteo)
//Dada una fecha, indicar los días que faltan hasta fin de mes.
int dias_hasta_fin_de_mes(int año, int mes, int dia){
    if (mes>1){
        return 31-dia;
    }
    if (mes>2){
        if (es_bisiesto(año)== 1){return 29 - dia;}
        else{ return 28 - dia;}}
    if (mes<=7) {
        if(mes%2 == 0){return 30 - dia;} 
        else{return 31-dia;}
    }
    if (mes>7) {
        if(mes%2 == 0){return 31 - dia;} 
        else{return 30-dia;}
    }
    
}

/*
EJERCICIO 7
-----------
Escribir un programa que calcule la mínima cantidad de billetes (moneda peso argentino) 
con los que se puede obtener un monto.

Ejemplo: 2320 ARS = (2x1000 ARS + 3x100 ARS + 1x20 ARS)
*/
int tipos_billetes[] = {1000, 100, 20};

int billetes_min(int ARS){
    int billetes = 0;
    if (ARS>=1000){
        billetes += ARS/1000;
        ARS = ARS%1000;
    }
    if (ARS>=100){
        billetes += ARS/100;
        ARS = ARS%100;
    }
    if (ARS>=20){
        billetes += ARS/20;
        ARS = ARS%20;
    }
    return billetes;
}

/*
EJERCICIO 8
-----------
Escribir una función que implemente el algoritmo de Euclides para calcular el máximo común divisor de 
dos números N y M, dado por los siguientes pasos:
- Teniendo N y M, se obtiene R, el resto de la división entera de M/N.
- Si R es cero, N es el MCD de los valores iniciales.
- Se reemplaza , M <-- N, N <-- R, y se vuelve al primer paso.
*/

int MCD( int n, int m){
    int resto = m/n;
    if (resto == 0){
        printf("MCD = %i\n", n);
        return n;
    }
    while(n!=0){
        resto = m % n;
        m = n;
        n = resto;
    }

    return m;

}

/*
EJERCICIO 9
-----------
 (Decisión múltiple) Escribir una función que dado un carácter imprima:
si el carácter es 'A':
    "Ada Lovelace"
si el carácter es 'a':
    "Alan Turing"
si el carácter es 'B':
    "Brian Kernighan"
si el carácter es 'b':
    "Bjarne Stroustrup"
si el carácter es 'D':
    "Dennis Ritchie
si el carácter es 'G':
    "Grace Hopper"
si el carácter es 'H':
    "Hedy Lamarr"
si el carácter es 'I':
    "Ida Rhodes"
si el carácter es 'M':
    "Margaret Hamilton"
si el carácter es 'm':
    "Maddog Hall"
si es otro carácter:
    "No lo conozco"
*/

void imprimir(char letra){
    switch (letra){
        case 'A':
            puts("Ada Lovelace");
            break;
        case 'a':
            puts("Alan Turing");
            break;
        case 'B':
            puts("Brian Kernighan");
            break; //! IMP EL BREAK
        case 'b':
            puts("Bjarne Stroustrup");
            break;
        case 'D':
            puts("Dennis Ritchie");
            break;
        case 'G':
            puts("Grace Hopper");
            break;
        case 'H':
            puts("Hedy Lamarr");
            break;
        case 'I':
            puts("Ida Rhodes");
            break;
        case 'M':
            puts("Margaret Hamilton");
            break;
        case 'm':
            puts("Maddog Hall");
            break;
        default:
            puts("No lo conozco");  
}
}

/*
EJERCICIO 10
------------
Escribir una función que calcule el tiempo que tardarán dos vehículos que están avanzando 
con la misma dirección pero en sentido contrario en colisionar, conociendo las velocidades 
de cada uno de ellos (en km/h). 
La función debe devolver el tiempo calculado y, si este es inferior a 10 minutos, 
imprimir por pantalla un mensaje que indique que se está en una situación peligrosa.
*/

int tiempo_hasta_colision(float velocidad1, float velocidad2){
    float tiempo = 0;
    if (velocidad1 != velocidad2) {
        tiempo = 60.0 / ((60.0 / velocidad1) + (60.0 / velocidad2));
    }

    // Convertir el tiempo a minutos
    float tiempo_en_minutos = tiempo * 60.0;

    // Imprimir mensaje si el tiempo es inferior a 10 minutos
    if (tiempo_en_minutos < 10.0) {
        printf("Situación peligrosa!\n");
    }

    return tiempo_en_minutos;
}