#include <stdio.h>

int main(int argc, char **argv) {

    int a = 0;
    int b = 0;
    int c = 0;
    int d = 0;
    int e = 0;
    int f = 0;
    int g = 0;
    int h = 0;
    int i = 0;

    printf ("ingrese un numero de 0 a 255 \n");
    scanf ("%d", &i);

    if(i<0 || i>255) {
        printf("El numero que ingresaste esta fuera de rango");
        return i;
    }

    if (i >= 0 || i <= 255) {
        if (i >= 128) {
            a = 1;
            i = i - 128;
        }
        if (i >= 64){
            b = 1;
            i = i - 64;
        }
        if (i >= 32){
            c = 1;
            i = i - 32;
        }
        if (i >= 16){
            d = 1;
            i = i - 16;}
        if (i >= 8){
            e = 1;
            i = i - 8;
        }
        if (i >= 4){
            f = 1;
            i = i - 4;
        }
        if (i >= 2){
            g = 1;
            i = i - 2;
        }
        if (i >= 1){
            h = 1;
            i = i - 1;
        }
    }
    
    printf ("En binario es %d %d %d %d %d %d %d %d ",a,b,c,d,e,f,g,h);

    return i;
}