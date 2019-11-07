#include <stdio.h>

/*Funcion para intercambiar el valor de dos punteros.
 * Para ello pasamos como parametro dos punteros
 * que seran los que intercambiaran de valor
 * */
void intercambiar(int *ptr1, int *ptr2){
    //Al valor del puntero 1 se le suma el valor del puntero 2
    *ptr1=*ptr1+*ptr2;
    /*para intercambiarlo se le asigna al puntero2 la resta del puntero2
     * al valor del puntero 1 que ahora es la suma de los dos punteros
     * */
    *ptr2=*ptr1-*ptr2;
    //Ahora al puntero 1 se le resta el valor del puntero 2
    *ptr1=*ptr1-*ptr2;
}

int main(){
    int primero;
    int segundo;

    printf("Ingrese el primer numero\n");
    scanf("%d",&primero);
    printf("Ingrese el primer segundo\n");
    scanf("%d",&segundo);
    intercambiar(&primero,&segundo);

    printf("\nNumeros Intercambiados\n");
    printf("primer numero: %d\n", primero);
    printf("segundo numero: %d\n", segundo);


    return 0;
}