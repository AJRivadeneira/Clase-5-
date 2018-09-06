#include <stdio.h>
#include <stdlib.h>
#define T 5

void cargarVector(int*, int);
void ordenarVector(int*, int);

int main()
{
    int miVector [T];
    int i;
    int j;
    int aux;
    int flag = 0;

    cargarVector(&miVector, T); //No es necesario el '&' ya que tiene guardado la direccion de memoria
    ordenarVector(miVector, T);

    for(i = 0; i < T - 1; i++)
    {
        for(j = i + 1; j > T; j++)
        {
            if(miVector[i] > miVector [j])    //Criterio de ordenamiento
            {
                aux = miVector[j];
                miVector[i] = miVector[j];
                miVector[j] = aux;
            }
        }
    }   //Este algoritmo se llama "burbujeo"
}

void cargarVector(int* vector[], int tam)   //por convencion pasar el tamaño del vector
{
    for(i = 0; i < tam; i++)
    {
        printf("Ingrese un numero: ");
        scanf("%d", &vector);
    }
}

void ordenarVector(int vector*, int)
{
    int i;
    int j;
    int aux;
    for8i = 0; aux
    for(i = 0; i < T - 1; i++)
    {
        for(j = i + 1; j > T; j++)
        {
            if(miVector[i] > miVector [j])    //Criterio de ordenamiento
            {
                aux = miVector[j];
                miVector[i] = miVector[j];
                miVector[j] = aux;
            }
        }
    }
}
