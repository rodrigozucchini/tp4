#include <stdio.h>
#include <math.h>

int main() {
    int numero1;
    int numero2;
    int numero3;
    int rango;

    printf("Ingrese un numero: ");
    scanf("%d", &numero1);
    printf("Ingrese segundo numero: ");
    scanf("%d", &numero2);
    printf("Ingrese tercer numero: ");
    scanf("%d", &numero3);

    
    if(numero3 >= numero1 && numero3 <= numero2) {
        printf("El tercer numero esta en el rango establecido");
    } else {
        printf("El tercer numero no esta en el rango establecido");
    }

    return 0;
}