/*Escriba un programa que lea un n�mero entero n desde teclado y luego reserve memoria en forma
din�mica para un arreglo de n enteros. Inicial�celo con valores aleatorios y a continuaci�n calcule e
imprima el m�ximo n�mero almacenado. Por �ltimo, libere la memoria reservada din�micamente.
Nota: Modularice la reserva de memoria, la inicializaci�n y el c�lculo del m�ximo.*/

#include <stdio.h>
#include <stdlib.h>

int Max(int *,int);
void Asignar(int*, int);
void Inicializar(int*, int);

int main(){
    int n;
    printf("Ingresar numero de elementos: ");
    int* v;
    scanf("%d",&n);
    Inicializar(&v,n);
    Asignar(v,n);
    printf("\nEl maximo es %d",Max(v,n));
    return 0;
}

void Inicializar(int* v,int n){
    v=(int*)calloc(n,sizeof(int));
}

void Asignar(int* v,int n){
    int i;
    for (i=0;i<n;i++){
        v[i]=(int)rand()%100;
        printf("-%d",v[i]);
    }
}

int Max(int* v,int n){
    int i;
    int mx=0;
    for (i=0;i<n;i++){
       if(mx<v[i])
            mx=v[i];
    }
    return mx;
}
