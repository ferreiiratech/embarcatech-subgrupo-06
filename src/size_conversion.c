#include <stdio.h>

#define ONE_UNIT_FACTOR 1000

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

void convertMetersToCentimeters() {
    double meters = readInputValue("Digite o valor em metros: ");
    double centimeters = convert(meters, ONE_UNIT_FACTOR / 10.0);
    printResult(meters, centimeters, "metros", "centímetros");
}

void convertMetersToMilimeters() {
    double meters = readInputValue("Digite o valor em metros: ");
    double milimeters = convert(meters, ONE_UNIT_FACTOR);
    printResult(meters, milimeters, "metros", "milímetros");
}

void convertCentimetersToMeters() {
    double centimeters = readInputValue("Digite o valor em centimetros: ");
    double meters = convert(centimeters, 1.0 / (ONE_UNIT_FACTOR / 10));
    printResult(centimeters, meters, "centímetros", "metros");
}

void convertCentimetersToMilimeters() {
    double centimeters = readInputValue("Digite o valor em centimetros: ");
    double milimeters = convert(centimeters, ONE_UNIT_FACTOR / 100.0);
    printResult(centimeters, milimeters, "centímetros", "milímetros");
}

void showSizeConversionMenu() {
    int choice;

    do{
        printf("\n--- Conversor de Comprimento ---\n");
        printf("1. Converter metros para centímetros\n");
        printf("2. Converter metros para milímetros\n");
        printf("3. Converter centímetros para metros\n");
        printf("4. Converter centímetros para milímetros\n");
        printf("5. Converter milímetros para metros\n");
        printf("6. Converter milímetros para centímetros\n");
        printf("7. Voltar\n");
        printf("Escolha uma opção: ");
        scanf("%d", &choice);

        switch(choice){
            case 1:
                convertMetersToCentimeters();
                break;
            case 2:
                convertMetersToMilimeters();
                break;
            case 3:
                convertCentimetersToMeters();
                break;
            case 4:
                convertCentimetersToMilimeters();
                break;
            case 7:
                printf("Voltando ao menu principal...\n");
                break;
            default:
                printf("Opção inválida! Tente Novamente.\n");
        }
    }while(choice != 7);
}