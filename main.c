#include "sumar.h"   
#include "restar.h"
#include "multiplicar.h"
#include <stdio.h>
#include "dividir.h"

int main(int argc, char const *argv[]) {
    int a, b;
    printf("Ingrese 1er numero: ");
    scanf("%d", &a);
    printf("Ingrese 2do numero: ");
    scanf("%d", &b);

    int resultado = sumar(a, b);
    printf ("La suma es: %d\n", resultado);

    int resta = restar(a, b); 
    printf("La resta es: %d\n", resta); 

    int multi = multiplicar(a, b); 
    printf("La multiplicacion es: %d\n", multi);

    float division = dividir (a,b);
    printf("La division es: %2f\n", division);

    return 0;
}
