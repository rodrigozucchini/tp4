#include <stdio.h>

int main() {
    int numero;
    int bits[32];
    int i = 0;

        printf("Ingrese un número entero (entre 0 y 255): ");
        scanf("%d", &numero);

        if (numero >= 0 && numero <= 255) {

        for (int i = 7; i >= 0; i--) {
            bits[i] = numero % 2;
            numero /= 2;
        }

        printf("El número en representación binaria es: ");

        for (int i = 0; i < 8; i++) {
            printf("%d", bits[i]);
        }
        
    } else {
        printf("El número ingresado está fuera del rango permitido.\n");
    }

    return 0;
}