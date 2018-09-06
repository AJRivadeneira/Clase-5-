#include <stdio.h>
#include <stdlib.h>
//#define T 5 //T se transforma en 5 de esta manera //Usar una letra en mayuscula

int main()
{
    int const T = 5; //T no puede modificar su valor de esta maneda //lo mismo que #define T 5
    int miVector[T];
    int i;
    int aux;
    int flag = 0;

    for(i = 0; i < T; i++)
    {
        printf("Ingrese Un Numero: ");
        scanf("%d", &miVector[i]);
    }

    printf("Ingrese un numero a buscar: ");
    scanf("%d", &aux);

    for(i = 0; i < T; i++)
    {
        if(aux == miVector[i])
        {
            flag = 1;
            printf("Posicion %d\n", i);
            break;
        }
    }
    if(flag = 0)
    {
        printf("No se encontro posicion");
    }

    printf("\nMuestro Todos Los Pares:\n");
    for(i = 0; i < T; i++)
    {
        if(miVector[i] % 2 == 0) //<-- Pares if(miVector[i] % 2) <-- Impares
        printf("%d\n", miVector[i]);
    }
    // miVector[2] = 158;
    // printf("%d", miVector[2]); //printf("%d", &miVector[2]);  : muestra direccion de memoria

    return 0;
}
