#include <stdio.h>
#include <math.h>


//El primer parametro es la base y el segundo es la potencia a la que se elevará
int convertToDecimal(int, int);

int main()
{
    int binario;
    //Solicitamos el numero en base binaria al usuario
    printf("Ingrese un numero en base binaria:\n");
    scanf("%d",&binario);

    /*Lamamos por primera vez a la funcion
     * y le pasamos como parametro el numero en base binaria y la potencia
     * que en la primera vez será 0*/
    printf("Numero convertido a decimal: %d", convertToDecimal(binario, 0));
    return 0;
}

int convertToDecimal(int binario, int n){
    int y = n;
    if(binario==0){
        return 0;
    } else {

        /*Obtenemos el mod de el binario dividido 10 que multiplicaremos
         * por la base 2 por ser base binaria, esto lo elevamos al exponente "y" que va a ir
         * cambiando dependiendo de la posicion en que se encuentre.
         * A todo esto se le suma el resultado de la siguiente posicion
         * para lo cual mandamos a llamar otra vez a la funcion pasandole como parametro
         * la variable binario dividido entre 10 y al exponente le sumamos 1
         *
         * */
        return (((binario%10) * pow(2, y)) + convertToDecimal((binario/10), ++y));
    }
}