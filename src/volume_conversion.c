#include <stdio.h>
#include "main.h"

#define LITERS_TO_ML 1000
#define LITERS_TO_M3 0.001
#define M3_TO_LITERS 1000

double readInputValue(const char* message) {
    double value;
    printf("%s", message);
    scanf("%lf", &value);
    return value;
}

void printResult(double value1, double value2, const char* unit1, const char* unit2) {
    printf("%.2lf %s equivalem a %.2lf %s.\n", value1, unit1, value2, unit2);
}

double convert(double value, double factor) {
    return value * factor;
}

void convertLitersToMilliliters() {
    double liters = readInputValue("Digite o valor em litros: ");
    double milliliters = convert(liters, LITERS_TO_ML);
    printResult(liters, milliliters, "litros", "mililitros");
}

void convertMillilitersToLiters() {
    double milliliters = readInputValue("Digite o valor em mililitros: ");
    double liters = convert(milliliters, 1.0 / LITERS_TO_ML);
    printResult(milliliters, liters, "mililitros", "litros");
}

void convertLitersToCubicMeters() {
    double liters = readInputValue("Digite o valor em litros: ");
    double cubicMeters = convert(liters, LITERS_TO_M3);
    printResult(liters, cubicMeters, "litros", "metros cúbicos");
}

void convertCubicMetersToLiters() {
    double cubicMeters = readInputValue("Digite o valor em metros cúbicos: ");
    double liters = convert(cubicMeters, M3_TO_LITERS);
    printResult(cubicMeters, liters, "metros cúbicos", "litros");
}

void showVolumeConversionMenu() {
    int choice;

    do {
        printf("\n--- Conversor de Volume ---\n");
        printf("1. Converter litros para mililitros\n");
        printf("2. Converter mililitros para litros\n");
        printf("3. Converter litros para metros cúbicos\n");
        printf("4. Converter metros cúbicos para litros\n");
        printf("5. Voltar\n");
        printf("Escolha uma opção: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                convertLitersToMilliliters();
                break;
            case 2:
                convertMillilitersToLiters();
                break;
            case 3:
                convertLitersToCubicMeters();
                break;
            case 4:
                convertCubicMetersToLiters();
                break;
            case 5:
                printf("Voltando ao menu principal...\n");
                break;
            default:
                printf("Opção inválida! Tente novamente.\n");
        }
    } while (choice != 5);
}
