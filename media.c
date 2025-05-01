#include <stdio.h>

int main() {
    int cantidad, numero;
    float suma = 0.0;

    printf("¿Cuántos números deseas ingresar? ");
    scanf("%d", &cantidad);

    for (int i = 0; i < cantidad; i++) {
        printf("Ingresa el número %d: ", i + 1);
        scanf("%d", &numero);
        suma += numero; 
    }

    float media = suma / cantidad; 
    printf("La media es: %.2f\n", media);
    return 0;
}