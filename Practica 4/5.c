/* Escriba un programa que reserve en forma din�mica un arreglo de 100 caracteres. A continuaci�n, lea
10 oraciones utilizando la funci�n gets e informe para cada una de ellas la cantidad de letras
min�sculas y de letras may�sculas que la componen. Utilice el arreglo creado como variable temporal
para procesar cada oraci�n. Por �ltimo, libere la memoria reservada din�micamente */
#include <stdio.h>
#include <stdlib.h>
#define MAX 10\

char * Inicializar(char *, int);
int Minuscula(char *, int);
int Mayuscula(char *, int);

int main(){
    int n=100;
    char* v;
    v=Inicializar(&v,n);
    int i;
    for (i=0;i<MAX;i++){
        printf("Horacion a guardar: ");
        gets(v);
        printf("En dicha horacion hay %d mayusculas y %d minusculas.\n", Mayuscula(v,n),Minuscula(v,n));
    }

    return 0;
}

char * Inicializar(char* v,int n){
    v=(char*)calloc(n,sizeof(int));
    return v;
}

int Minuscula(char * v, int n){
  int num=0,i=0;
  while (v[i]!='\0' && i<n){
    if (v[i]>='a' && v[i]<='z'){
      num++;
    }
    i++ ;
  }
  return num;
}

int Mayuscula(char * v, int n){
  int num=0,i=0;
  while (v[i]!='\0' && i<n){
    if (v[i]>= 'A' && v[i]<='Z'){
      num++;
    }
    i++ ;
  }
  return num;
}
