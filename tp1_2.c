#include <stdio.h>

int cuadrado(int num);
void cuadradoVoid(int num);
void mostrarDireccionContenido(int *num);
void invertir(int *a, int *b);
void ordenar(int *a, int *b);

int main()
{

    int x, y;
    printf("Ingrese dos valores: ");
    printf("\nValor 1: ");
    scanf("%d", &x);
    printf("Valor 2: ");
    scanf("%d", &y);

    printf("Cuadrado de %d: %d\n", x, cuadrado(x));
    cuadradoVoid(x);

    mostrarDireccionContenido(&x);
    mostrarDireccionContenido(&y);

    invertir(&x, &y);
    printf("Valores invertidos: x = %d, y = %d\n", x, y);

    ordenar(&x, &y);
    printf("Valores ordenados: x = %d, y = %d\n", x, y);

    return 0;
}

// a) Función que devuelve el cuadrado de un número
int cuadrado(int num)
{
    return num * num;
}

// b) Función que devuelve el cuadrado de un número pero con tipo void
void cuadradoVoid(int num)
{
    printf("El cuadrado de %d es %d\n", num, num * num);
}

// c) Función que muestra la dirección y el contenido de una variable
void mostrarDireccionContenido(int *num)
{
    printf("Direccion de memoria: %p, Contenido: %d\n", (void *)num, *num);
}

// d) Función que invierte dos valores
void invertir(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

// e) Función que ordena dos valores
void ordenar(int *a, int *b)
{
    if (*a > *b)
    {
        int temp = *a;
        *a = *b;
        *b = temp;
    }
}