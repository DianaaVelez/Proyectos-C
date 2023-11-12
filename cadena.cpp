#include<stdio.h>

int main() {
    char cadena[] = "Hello World";
    char cad[] = {'h', 'i', '\0'};
    char *c = "Hello";

    int tam_cadena = sizeof(cadena);
    int tam_cad = sizeof(cad);
    int tam_c = sizeof(c);

    printf("Contenido cadena: %s \n", cadena);
    printf("Tamaño cadena: %d \n", tam_cadena);

    printf("Contenido cad: ");
    for (int i = 0; i < tam_cad; i++) {
        printf("'%c' ", cad[i]);
    }
    printf("\n");
    printf("Tamaño cad: %d \n", tam_cad);

    printf("Contenido c: %s \n", c);
    printf("Tamaño c: %d \n", tam_c);

    return 0;
}

