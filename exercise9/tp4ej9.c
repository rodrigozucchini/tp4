#include <stdio.h>

int main() {
    int lado1;
    int lado2;
    int lado3;

    printf("Ingrese los lados de un triangulo para saber que tipo de triangulo es \n");
    printf("Ingrese lo que mide el lado 1: ");
    scanf("%d", &lado1);
    printf("Ingrese lo que mide el lado 2: ");
    scanf("%d", &lado2);
    printf("Ingrese lo que mide el lado 3: ");
    scanf("%d", &lado3);

    
    if(lado1 == lado2 && lado1 == lado3) {
        printf("Es un traingulo equilatero");
    } else if(lado1 == lado2 || lado3 == lado2 || lado3 == lado1){
        printf("Es un triangulo isoceles");
    } else {
        printf("Es un triangulo escaleno");
    }

    return 0;
}