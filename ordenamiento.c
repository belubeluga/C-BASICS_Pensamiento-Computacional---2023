#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#include <limits.h> // los limites
#include <string.h>


void selectionSort(int arreglo[], int size){
    for(int i=0; i<size - 1; i++){
        int idx_min = i;
        int j = i;
        for(int j = i; j<size;j++){
            if(arreglo[idx_min]> arreglo[j]){
                idx_min = j;
            }
        }
        int temp = arreglo[idx_min];
        arreglo[idx_min] = arreglo[j];
        arreglo[j] = temp;
    }
}

void operaciones(int vec1[2], int vec2[2], int*prod_interno, int * norma, float normalizado[2], float*media){
    int prod_interno = vec1[0] * vec2[0] + vec1[1] * vec2[1];
    int norma = sqrt(pow(vec1[0],2)+pow(vec1[1],2));
    int normalizado[0] = vec1[0]/ * norma; 
    int normalizado[0] = vec1[1]/ * norma;
    * media = (float) (vec1[0]=vec1[1])/2.0; //!casteo
}

int main(void){
    int arreglo[] = {5,2,4,1,3};
    int size = sizeof(arreglo)/sizeof(arreglo[0]);
    selectionSort(arreglo, size);

    for(int i=0; i<size;i++){
        printf("%d ", arreglo[i]);
    }
    puts("");
    return 0;
}

int main2(void){
    int vec1[2];
    int vec2[2];

    srand(time(NULL));
    vec1[0] = rand() % 101; //num del 1 al 100
    vec1[1] = rand() % 101;
    vec2[0] = rand() % 101;
    vec2[1] = rand() % 101;

    printf("%d %d\n", vec1[0], vec1[1]);
    printf("%d %d\n", vec2[0], vec2[1]);

    return 0;
}