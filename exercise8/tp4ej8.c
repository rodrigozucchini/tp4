#include <stdio.h>

int main() {
    float fahrenheit, celsius;

    printf("Ingrese los grados Fahrenheit: ");
    scanf("%f", &fahrenheit);

    if (fahrenheit >= -100 && fahrenheit <= 140) {

        celsius = (fahrenheit - 32) * 5 / 9;

        printf("%.2f grados Fahrenheit son %.2f grados Celsius.\n", fahrenheit, celsius);
    } else {
 
        printf("No es posible ingresar el valor %.2f grados Fahrenheit. Ingrese un valor dentro del rango -100 a 140.\n", fahrenheit);
    }
    return 0;
}