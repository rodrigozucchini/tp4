#include <stdio.h>

int main() {
    int numero;

    printf("Ingrese un numero: ");
    scanf("%d", &numero);

    if(numero % 2 == 0) {
        printf("El numero ingresado %d es un numero par", numero);
    } else {
        printf("El numero ingresado %d es un numero inpar", numero);
    }

    return 0;
}