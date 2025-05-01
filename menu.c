#include <stdio.h>

int main() {
    int opcion;
    int num1, num2, resultado;

    do {
        printf("Menú:\n");
        printf("1. Sumar\n");
        printf("2. Restar\n");
        printf("3. Salir\n");
        printf("Selecciona una opción: ");
        scanf("%d", &opcion);

        if (opcion == 1 || opcion == 2) {
            printf("Ingresa dos números: ");
            scanf("%d %d", &num1, &num2);
        }

        switch (opcion) {
            case 1:
                resultado = num1 + num2;
                printf("Resultado: %d\n", resultado);
                break;
            case 2:
                resultado = num1 - num2;
                printf("Resultado: %d\n", resultado);
                break;
            case 3:
                printf("Saliendo...\n");
                break;
            default:
                printf("Opción no válida. Intenta de nuevo.\n");
        }
    } while (opcion != 3);

    return 0;
}