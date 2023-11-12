#include <stdio.h>
#include <limits.h>
//(16 ejercicios)

/*
EJERCICIO 1
-----------
Dados los siguientes tipos:
    char 
        - 1 byte
        - [-2^7,2^7-1] = [-128,127]
        - unsigned:[0, 2^8-1] = [0,255]
    short
        - 2 bytes
        - [-2^15, 2^15-1]
        - unsigned: [0,2^16-1]
    int
        - 4 bytes
        - [-2^31, 2^31-1]
    unsigned int
        - 4 bytes
        - [0, 2^32-1]
    unsigned long
        - 8 bytes
        - [0, 2^64-1]
cuantizacion NO uniforme:
    float
        - 4 bytes (presicion simple)
    double
        - 8 bytes (precision doble)
    LARGO = signo * mantisa * 2**exponente

¿Cuál es el tamaño, en bytes, de cada uno y cuáles son sus valores máximos y mínimos?
¿Cuáles, si alguno, pueden tener un tamaño diferente? ¿De qué depende el cambio?
    --> los de cuantizacion no uniforme?
*/

/*
EJERCICIO 2
-----------
Cuantificar la cantidad de memoria requerida para los siguientes problemas

(Note: Los vectores y las matrices ocupan tanto como la suma de sus elementos)

a) Un sistema mide un valor de temperatura float por segundo. 
¿Cuánta memoria se genera por hora de registros?
    --> 4 bytes por segundo --> 240 por minuto --> 14400 bytes.

b) Una pantalla 1080p tiene una resolución de 1920x1080 pixeles. 
¿Cuánta memoria hace falta para generar una imagen si…?

    (i) cada pixel es monocromo, es decir, ocupa 1 bit. --> 2073600 bits. (259200 bytes)
    (ii) se utilizan 256 colores, es decir, 1 byte por pixel. --> 2073600 bytes.
    (iii) se utilizan 24 bits de color (SVGA). --> 55987200 bits.
    (iv) La cámara de fotos de un iPhone 11 tiene 12 megapixeles. ¿Cuánta memoria ocupa una foto de 24 bits de profundidad de color? --> 24 * 8 * 1 mill

c) El audio digital se suele almacenar en 16 bits a distintas frecuencias de muestreo. 
¿Cuánto ocupa un minuto de audio mono muestreado a…?

    (i) 44.1 KHz (CD). --> 44,1 kHz / 16 bits
    (ii) 192 KHz --> 69.6598639456 bits
    (iii) Un CD pero estéreo. --> 700 MB == 1 mill * 700 bytes * 2 (x ser estéreo)

*/

/*
EJERCICIO 3
-----------
¿Cuál es la diferencia entre los literales 6, '6', y "6"? 
Defina 3 constantes distintas para cada uno de ellos.
6 = int (entero) --> %d
'6' = char --> %c
"6" = char cadena[10] (cadena de chars) --> %s
*/

/* TRABAJAR CON CADENAS:
int main(void) {
    // Definir una cadena de caracteres
    char cadena[] = "Hola, mundo!";

    // Imprimir la cadena de caracteres
    printf("%s\n", cadena);

    return 0;
}*/

/*
EJERCICIO 4
-----------

Definir las siguientes constantes:

M_PI con el valor 3.14159265358979,
STR_HOLA_MUNDO con el valor "Hola mundo",
NOTA_MAX con el valor 10,
NOTA_MIN_APROBADO con el valor 4, y
SEGxHORA con el valor 3600.
*/

#define M_PI 3.14159265358979
#define STR_HOLA_MUNDO "Hola mundo"
#define NOTA_MAX 10
#define NOTA_MIN_APROBADO 4
#define SEGxHORA 3600

/*
EJERCICIO 5
-----------
¿Qué diferencia hay entre los operadores = e ==?
--> = para asignar valor, == para verificar condicion.
*/

/*
EJERCICIO 6
-----------
¿Es válida la sentencia: M_PI = 3.14159;, con M_PI definida como en el ejercicio 4?
no porque M_PI ya esta definida como constante arriba.
*/

/*
EJERCICIO 7
-----------
Siendo NOTA_MAX una constante definida y nota una variable
¿Es válida la sentencia NOTA_MAX == nota;? si es para un if/ para una condicion, si.
¿Qué valores puede tomar esa sentencia? 0 o 1 (como reemplazo de bool)
*/

/*
EJERCICIO 8
-----------
Escribir un programa que muestre por pantalla el valor de tres variables de tipo entero, 
real y carácter que hayan sido definidas pero no inicializadas. 
Compilar y ejecutar el programa. Analizar la salida que se produce.
*/

/*
int main(void){
    char x = 35;
    int y = 36;
    int z;
    z = x + y;
    printf("la suma de %i más %i es = %i\n", x,y,z);
    return 0;
}*/

/*
EJERCICIO 9
-----------
Corregir los errores en cada una de las siguientes sentencias:

Note: puede haber más de un error en cada una.*/

//printf("El producto de %d y %d es %d\n", x, y);

//a + b = suma; --> int suma = a + b;

/* Programa para obtener el máximo */

//if (numero => maximo) {
//    maximo == numero;}

// int resto = numerador%denominador
//printf ("El resto de dividir %d por %d es %d\n", numerador, denominador, resto);

//if (x = y) {
//    print ("%d es igual a %d\n", x, y);}

//int suma = x+y
//print ("La suma da %d\n", suma);

/*
EJERCICIO 10
------------
(Todo es memoria 1)

Escribir un programa que imprima el carácter 'A'.
Escribir un programa que imprima, con valor decimal, los caracteres '0' y 'J'. Nota: utilice printf().*/

/*
int main(void){
    puts("A");
    int prueba = 'X' - 'A';
    printf("%d, %d\n", 5 + 2,prueba); //ACORDARSE DEL \N
}*/

/*
EJERCICIO 11
------------
(Todo es memoria 2) Respóndase las siguientes preguntas, y luego verifíquelas escribiendo un programa que se las responda:

¿Qué diferencia hay entre 0 y '0'? --> uno es int, otro char
¿Es válida la operación '6' - '0'? --> si si lo defino / imprimo como un int
¿Es válida la operación 'X' - 'A'? ¿Qué obtiene al hacerla? ¿A qué tipo de variable corresponde? se suman chars y se devuelve int
*/

/*
EJERCICIO 12
------------
Escribir un programa que imprima por pantalla los valores de las constantes estándar 
INT_MIN, INT_MAX, RAND_MAX y UINT_MAX. ¿En qué encabezados se encuentran estas constantes?
*/

#include <stdio.h>
#include <limits.h> // los limites
#include <stdlib.h> // rand_max

int main() {
    printf("Valor mínimo de int: %d\n", INT_MIN);
    printf("Valor máximo de int: %d\n", INT_MAX);
    printf("Valor máximo de rand: %d\n", RAND_MAX);
    printf("Valor máximo de unsigned int: %u\n", UINT_MAX);

    return 0;
}
/*Valor mínimo de int: -2147483648
Valor máximo de int: 2147483647
Valor máximo de rand: 2147483647
Valor máximo de unsigned int: 4294967295*/


/*
EJERCICIO 13
------------
(printf()) Dado un número flotante imprimirlo:

Con 2 decimales,
Con 3 decimales.
Con signo, sea positivo o negativo.
Con 4 decimales, en ancho fijo de 10 caracteres, con signo y alineado a derecha.

*/