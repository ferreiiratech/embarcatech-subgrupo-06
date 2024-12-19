#include <stdio.h>

#define ONE_UNIT_KILOGRAM 1000
#define ONE_UNIT_TON 1000000

double convert(double value, double factor) {
    return value * factor;
}

double readInputValue(const char* prompt) {
    double value;
    printf("%s", prompt);
    scanf("%lf", &value);
    return value;
}

void printResult(double value1, double value2, const char* unit1, const char* unit2) {
    printf("%.2lf %s equivalem a %.2lf %s.\n", value1, unit1, value2, unit2);
}

void convertKilogramsToGrams() {
    double kilograms = readInputValue("Digite o valor em quilogramas: ");
    double grams = convert(kilograms, ONE_UNIT_KILOGRAM);
    printResult(kilograms, grams, "quilogramas", "gramas");
}

void convertKilogramsToTons() {
    double kilograms = readInputValue("Digite o valor em quilogramas: ");
    double tons = convert(kilograms, 1.0 / ONE_UNIT_KILOGRAM);
    printResult(kilograms, tons, "quilogramas", "toneladas");
}

void convertGramsToKilograms() {
    double grams = readInputValue("Digite o valor em gramas: ");
    double kilograms = convert(grams, 1.0 / ONE_UNIT_KILOGRAM);
    printResult(grams, kilograms, "gramas", "quilogramas");
}

void convertTonsToKilograms() {
    double tons = readInputValue("Digite o valor em toneladas: ");
    double kilograms = convert(tons, ONE_UNIT_KILOGRAM);
    printResult(tons, kilograms, "toneladas", "quilogramas");
}

void convertGramsToTons() {
    double grams = readInputValue("Digite o valor em gramas: ");
    double tons = convert(grams, 1.0 / ONE_UNIT_TON);
    printResult(grams, tons, "gramas", "toneladas");
}

void convertTonsToGrams() {
    double tons = readInputValue("Digite o valor em toneladas: ");
    double grams = convert(tons, ONE_UNIT_TON);
    printResult(tons, grams, "toneladas", "gramas");
}

void showMassConversionMenu() {
    int choice;

    do {
        printf("\n--- Conversor de Massas ---\n");
        printf("1. Converter quilogramas para gramas\n");
        printf("2. Converter quilogramas para toneladas\n");
        printf("3. Converter gramas para quilogramas\n");
        printf("4. Converter gramas para toneladas\n");
        printf("5. Converter toneladas para quilogramas\n");
        printf("6. Converter toneladas para gramas\n");
        printf("7. Voltar\n");
        printf("Escolha uma opção: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                convertKilogramsToGrams();
                break;
            case 2:
                convertKilogramsToTons();
                break;
            case 3:
                convertGramsToKilograms();
                break;
            case 4:
                convertGramsToTons();
                break;
            case 5:
                convertTonsToKilograms();
                break;
            case 6:
                convertTonsToGrams();
                break;
            case 7:
                printf("Voltando...\n");
                break;
            default:
                printf("Opção inválida! Tente novamente.\n");
        }
    } while (choice != 7);
}
