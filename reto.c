#include <stdio.h>
#include <math.h>

void leyDeOhm() {
    float V, I, R;
    int opcion;

    printf("Ley de Ohm:\n");
    printf("1. Calcular Voltaje (V = I * R)\n");
    printf("2. Calcular Corriente (I = V / R)\n");
    printf("3. Calcular Resistencia (R = V / I)\n");
    printf("Selecciona una opción: ");
    scanf("%d", &opcion);

    switch (opcion) {
        case 1:
            printf("Ingresa la Corriente (I) en amperios: ");
            scanf("%f", &I);
            printf("Ingresa la Resistencia (R) en ohmios: ");
            scanf("%f", &R);
            if (I < 0 || R < 0) {
                printf("Error: Corriente y Resistencia deben ser positivas.\n");
                break;
            }
            V = I * R;
            printf("Voltaje (V) = %.2f V\n", V);
            break;
        case 2:
            printf("Ingresa el Voltaje (V) en voltios: ");
            scanf("%f", &V);
            printf("Ingresa la Resistencia (R) en ohmios: ");
            scanf("%f", &R);
            if (R <= 0) {
                printf("Error: La Resistencia debe ser mayor que cero.\n");
                break;
            }
            I = V / R;
            printf("Corriente (I) = %.2f A\n", I);
            break;
        case 3:
            printf("Ingresa el Voltaje (V) en voltios: ");
            scanf("%f", &V);
            printf("Ingresa la Corriente (I) en amperios: ");
            scanf("%f", &I);
            if (I <= 0) {
                printf("Error: La Corriente debe ser mayor que cero.\n");
                break;
            }
            R = V / I;
            printf("Resistencia (R) = %.2f Ohmios\n", R);
            break;
        default:
            printf("Opción no válida.\n");
    }
}

void factorDePotencia() {
    float potenciaActiva, potenciaReactiva, factorPotencia;

    printf("Cálculo del Factor de Potencia:\n");
    printf("Ingresa la Potencia Activa (P) en vatios: ");
    scanf("%f", &potenciaActiva);
    printf("Ingresa la Potencia Reactiva (Q) en voltamperios reactivos: ");
    scanf("%f", &potenciaReactiva);

    if (potenciaActiva < 0 || potenciaReactiva < 0) {
        printf("Error: Las potencias no pueden ser negativas.\n");
        return;
    }

    factorPotencia = potenciaActiva / sqrt(pow(potenciaActiva, 2) + pow(potenciaReactiva, 2));
    printf("El Factor de Potencia es: %.2f\n", factorPotencia);
}

void resistenciaConductor() {
    float resistividad, longitud, area, resistencia;

    printf("Cálculo de la Resistencia de un Conductor:\n");
    printf("Ingresa la Resistividad (ρ) en ohmios·metro: ");
    scanf("%f", &resistividad);
    printf("Ingresa la Longitud (L) en metros: ");
    scanf("%f", &longitud);
    printf("Ingresa el Área de la Sección Transversal (A) en metros cuadrados: ");
    scanf("%f", &area);

    if (resistividad < 0 || longitud < 0 || area <= 0) {
        printf("Error: Valores inválidos. Área debe ser mayor a cero y los demás no negativos.\n");
        return;
    }

    resistencia = (resistividad * longitud) / area;
    printf("La Resistencia del Conductor es: %.2f Ohmios\n", resistencia);
}

void resistenciaLED() {
    float Vfuente, Vled, Iled, R;

    printf("Cálculo de la Resistencia para un LED:\n");
    printf("Ingresa el Voltaje de la Fuente (V) en voltios: ");
    scanf("%f", &Vfuente);
    printf("Ingresa el Voltaje del LED (Vled) en voltios: ");
    scanf("%f", &Vled);
    printf("Ingresa la Corriente del LED (Iled) en amperios: ");
    scanf("%f", &Iled);

    if (Vfuente < 0 || Vled < 0 || Iled <= 0) {
        printf("Error: Voltajes no pueden ser negativos y la corriente debe ser mayor que cero.\n");
        return;
    }

    if (Vfuente <= Vled) {
        printf("Error: El voltaje de la fuente debe ser mayor que el del LED.\n");
        return;
    }

    R = (Vfuente - Vled) / Iled;
    printf("La Resistencia necesaria para el LED es: %.2f Ohmios\n", R);
}

int main() {
    int opcion;

    do {
        printf("\nCalculadora de Ingeniería\n");
        printf("1. Ley de Ohm\n");
        printf("2. Cálculo del Factor de Potencia\n");
        printf("3. Resistencia de un Conductor\n");
        printf("4. Resistencia para LED\n");
        printf("5. Salir\n");
        printf("Selecciona una opción: ");
        scanf("%d", &opcion);

        switch (opcion) {
            case 1:
                leyDeOhm();
                break;
            case 2:
                factorDePotencia();
                break;
            case 3:
                resistenciaConductor();
                break;
            case 4:
                resistenciaLED();
                break;
            case 5:
                printf("Saliendo del programa...\n");
                break;
            default:
                printf("Opción no válida. Intenta de nuevo.\n");
        }
    } while (opcion != 5);

    return 0;
}

