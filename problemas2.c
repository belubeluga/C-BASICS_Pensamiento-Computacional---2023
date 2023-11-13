#include <stdio.h>
/*
EJERCICIO 2
-----------
Escriba una función que le solicite al usuario el ingreso de n números enteros por la
terminal. La función debe solicitar los datos hasta completar la cantidad establecida y
retornarlos por referencia en la dirección donde se guardarán como un array. Además
debe recibir un argumento que especifique la cantidad n. El prototipo debe ser:
void ingresar_muestras(int * data, int n);
Luego implemente una función main que permita ejecutar esta función para n = 10 e
imprima por terminal los n datos retornados por la función.
*/

void ingresar_muestras(int * data, int n){
    for (int j = 0; (j < n); j++) {
        printf("Ingrese dato: ");
        scanf("%i",&data[j]);
    }
}

int main(void){
    printf("Elija cantidad de datos: ");
    int n;
    scanf("%i", n);
    int data[n];
    ingresar_muestras(data,n);
    int i;
    return 0;
}