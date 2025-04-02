#include <stdio.h>

int main () {
    printf("Hola mundo");

    int var = 42;  // Declaramos una variable de algún tipo
    int *ptr = &var; // Declaramos un puntero que apunta a la variable

    // Mostramos la información solicitada
    printf("1) El contenido del puntero: %d\n", *ptr);
    printf("2) La dirección de memoria almacenada por el puntero: %p\n", ptr);
    printf("3) La dirección de memoria de la variable: %p\n", &var);
    printf("4) La dirección de memoria del puntero: %p\n", &ptr);
    printf("5) El tamaño de memoria utilizado por la variable: %lu bytes\n", sizeof(var));

    return 0;
}