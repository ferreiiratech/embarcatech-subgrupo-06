#include "shared.h"
#include <stdio.h>
#include <stdlib.h>

#define ONE_UNIT_FACTOR 1000

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

void convertMilimetersToMeters() {
    double milimeters = readInputValue("Digite o valor em milímetros: ");
    double meters = convert(milimeters, 1.0 / ONE_UNIT_FACTOR);
    printResult(milimeters, meters, "milímetros", "metros");
}

void convertMilimetersToCentimeters() {
    double milimeters = readInputValue("Digite o valor em milímetros: ");
    double centimeters = convert(milimeters, 1.0 / (ONE_UNIT_FACTOR / 100));
    printResult(milimeters, centimeters, "milímetros", "centímetros");
}

void showSizeConversionMenu() {
    int choice;

    do{
        system("cls");
        printf("\n--- Conversor de Comprimento ---\n");
        printf("1. Converter metros para centímetros\n");
        printf("2. Converter metros para milímetros\n");
        printf("3. Converter centímetros para metros\n");
        printf("4. Converter centímetros para milímetros\n");
        printf("5. Converter milímetros para metros\n");
        printf("6. Converter milímetros para centímetros\n");
        printf("7. Voltar\n\n");
        printf("-> Escolha uma opção: ");
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
            case 5:
                convertMilimetersToMeters();
                break;
            case 6:
                convertMilimetersToCentimeters();
                break;
            case 7:
                printf("Voltando ao menu principal...\n");
                break;
            default:
                printf("Opção inválida! Tente Novamente.\n");
        }
        system("pause");
    }while(choice != 7);
}