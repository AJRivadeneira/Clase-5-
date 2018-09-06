#include <stdio.h>
#include <stdlib.h>

/** \brief incrementa en 10 el valor recibido
 *
 * \param int el valor sobre el que voy a incrementar
 * \return int [1] si el valor es mayor que 15 y [0] si es 15 o menor
 *
 */
int miFuncion(int*);

int main()
{
    int miEntero = 3;
    int estado;

    estado = miFuncion(&miEntero);

    printf("El nuevo valor es %d\n", miEntero);

    if(estado == 1)
    {
        printf("El valor es mayor a 15");
    }
    else
    {
        printf("El valor es menor o igual a 15");
    }

    return 0;
}

int miFuncion(int* pValor) // la p antes del puntero sirve para avisar que es uno
{
    int queDevuelve = 0;
    int aux;

    aux = (*pValor);

    aux += 10;

    // pValor += 10; or (*pValor) = pValor + 10;

    if (*pValor > 15)
    {
        queDevuelve = 1;
    }

    (*pValor) = aux;
    // else { queDevuelve = 0; } : sino lo declaro en el primer int
    return queDevuelve;
}
