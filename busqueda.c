#include <stdio.h>

int main() {
    int numeros[5];
    int minimo;

    printf("Ingresa 5 números:\n");
    for (int i = 0; i < 5; i++) {
        printf("Número %d: ", i + 1);
        scanf("%d", &numeros[i]);
    }

    minimo = numeros[0]; // Asumimos que el primer número es el mínimo
    for (int i = 1; i < 5; i++) {
        if (numeros[i] < minimo) {
            minimo = numeros[i];
        }
    }

    printf("El valor mínimo es: %d\n", minimo);
    return 0;
}