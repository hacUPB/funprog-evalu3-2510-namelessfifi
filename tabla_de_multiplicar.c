#include <stdio.h>

int main() {
    int numero;

    printf("Ingresa un número para mostrar su tabla de multiplicar: ");
    scanf("%d", &numero);

    printf("Tabla de multiplicar de %d:\n", numero);
    for (int i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", numero, i, numero * i);
    }

    return 0;
}