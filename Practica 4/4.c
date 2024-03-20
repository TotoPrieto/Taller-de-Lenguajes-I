/* Escriba un programa que lea un n�mero entero n desde teclado y luego reserve memoria en forma
din�mica para un arreglo de n float. Inicial�celo con valores ingresados por teclado y a continuaci�n
calcule e imprima el promedio de todos ellos. Por �ltimo, libere la memoria reservada din�micamente.
Nota: Modularice la reserva de memoria, la inicializaci�n y el c�lculo del promedio.*/
#include <stdio.h>
#include <stdlib.h>

float Prom(float *,int);
void Asignar(float *, int);
void Inicializar(float *, int);

int main(){
    int n;
    printf("Ingresar numero de elementos: ");
    float* v;
    scanf("%d",&n);
    Inicializar(&v,n);
    Asignar(v,n);
    printf("\nEl promedio es %f",Prom(v,n));
    return 0;
}

void Inicializar(float* v,int n){
    v=(float*)calloc(n,sizeof(int));
}

void Asignar(float* v,int n){
    int i;
    for (i=0;i<n;i++){
        printf("Valor a asignar: ");
        scanf("%f", &v[i]);
    }
}

float Prom(float* v,int n){
    int i;
    float pm=0;
    for (i=0;i<n;i++){
       pm+=v[i];
    }
    pm= pm/(float)n;
    return pm;
}

