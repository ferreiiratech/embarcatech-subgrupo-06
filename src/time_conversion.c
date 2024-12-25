#include "shared.h"
#include <stdio.h>
#include <stdlib.h>

#define ONE_MINUTE 60
#define ONE_HOUR 3600
#define ONE_DAY 86400

void convertSecondsToMinutes() {
    int seconds = readInputValue("Digite o valor em segundos: ");
    double minutes = convert(seconds, 1.0 / ONE_MINUTE);
    printResult(seconds, minutes, "segundos", "minutos");
}

void convertSecondsToHours() {
    int seconds = readInputValue("Digite o valor em segundos: ");
    double hours = convert(seconds, 1.0 / ONE_HOUR);
    printResult(seconds, hours, "segundos", "horas");
}

void convertSecondsToDays() {
    int seconds = readInputValue("Digite o valor em segundos: ");
    double days = convert(seconds, 1.0 / ONE_DAY);
    printResult(seconds, days, "segundos", "dias");
}

void convertMinutesToSeconds() {
    int minutes = readInputValue("Digite o valor em minutos: ");
    int seconds = convert(minutes, ONE_MINUTE);
    printResult(minutes, seconds, "minutos", "segundos");
}

void convertHoursToSeconds() {
    int hours = readInputValue("Digite o valor em horas: ");
    int seconds = convert(hours, ONE_HOUR);
    printResult(hours, seconds, "horas", "segundos");
}

void convertDaysToSeconds() {
    int days = readInputValue("Digite o valor em dias: ");
    int seconds = convert(days, ONE_DAY);
    printResult(days, seconds, "dias", "segundos");
}

void showTimeConversionMenu() {
    int choice;

    do {
        system("cls");
        printf("\n--- Conversor de Tempo ---\n");
        printf("1. Converter segundos para minutos\n");
        printf("2. Converter segundos para horas\n");
        printf("3. Converter segundos para dias\n");
        printf("4. Converter minutos para segundos\n");
        printf("5. Converter horas para segundos\n");
        printf("6. Converter dias para segundos\n");
        printf("7. Voltar\n\n");
        printf("-> Escolha uma opção: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                convertSecondsToMinutes();
                break;
            case 2:
                convertSecondsToHours();
                break;
            case 3:
                convertSecondsToDays();
                break;
            case 4:
                convertMinutesToSeconds();
                break;
            case 5:
                convertHoursToSeconds();
                break;
            case 6:
                convertDaysToSeconds();
                break;
            case 7:
                printf("Voltando...\n");
                break;
            default:
                printf("Opção inválida! Tente novamente.\n");
        }
        system("pause");
    } while (choice != 7);
}
