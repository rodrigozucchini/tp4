#include <stdio.h>

int main () {
    int num1, num2;

    printf("Este es el segundo ejercicio del trabajo practico 4. \n");

    printf("Ingrese el primer numero: ");
    scanf("%d", &num1);
    printf("Ingrese el segundo numero: ");
    scanf("%d", &num2);

    if(num1 > num2) {
        printf("El primer numero ingresado %d es mayor que el segundo, %d", num1, num2);
    } else if (num1 < num2)
    {
        printf("El segundo numero ingresado %d es mayor que el primero, %d", num2, num1);
    } else {
        printf("Los dos numeros son iguales");
    }
}