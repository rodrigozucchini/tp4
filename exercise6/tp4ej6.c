#include <stdio.h>
#include <math.h>

int main() {
    int numero1;
    int numero2;

    printf("Ingrese un numero: ");
    scanf("%d", &numero1);
    printf("Ingrese un numero: ");
    scanf("%d", &numero2);


    if(numero2 == 0) {
        printf("No se puede dividir porque el segundo numero es cero");
    } else if (numero2 < numero1) {
        printf("Necesitamos que el segundo numero sea menor que el primer numero ingresado");
    } else {
        printf("La division fue un exito");
    }

    return 0;
}