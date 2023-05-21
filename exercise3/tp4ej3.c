#include <stdio.h>

int main() {
    double numero;

    printf("Ingrese un numero: ");
    scanf("%lf", &numero);

    if (numero == (int)numero) {
        printf("El numero %.0lf es un numero entero.\n", numero);
    } else {
        printf("El numero %.2lf es un numero decimal.\n", numero);
    }

    return 0;
}