#include <stdio.h>
#include <math.h>

int main() {
    int numero;
    int resultado;

    printf("Ingrese un numero: ");
    scanf("%d", &numero);

    resultado = pow(numero, 3);

    if(resultado > 0) {
        printf("El numero ingresado %d elevado al cubo es un numero positivo", numero);
    } else if(resultado < 0) {
        printf("El numero ingresado %d elevado al cubo es un numero negativo", numero);
    } else {
        printf("El resultado es cero", numero);
    }
    return 0;
}