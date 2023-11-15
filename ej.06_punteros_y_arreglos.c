//(3 ejercicios)
#include <stdio.h>
#include <math.h>
//? EJERCICIO 1

int cargar_datos(float *datos, unsigned int *largo);

void stats(float *datos, unsigned int largo, float *media, float *varianza){
    //CALCULAR MEDIA
    int suma = 0;
    for(int j=0; j<largo; j++){
        suma += datos[j];
    }
    *media = suma/largo;

    suma = 0; //reestablezco variable
    for(int i=0; i<largo; i++){
        suma += pow(datos[i]- *media, 2);
    }
    *varianza = suma/largo;
}

int main(void){
    float datos[100];
    unsigned int largo;
    float media, varianza;

    cargar_datos(datos, &largo);

    stats(datos, largo, &media, &varianza);

}