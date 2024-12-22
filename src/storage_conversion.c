#include "shared.h"
#include <stdio.h>

#define BIT_TO_BYTE 0.125  
#define BYTE_TO_KILOBYTE 0.001
#define KILOBYTE_TO_MEGABYTE 0.001
#define MEGABYTE_TO_GIGABYTE 0.001
#define GIGABYTE_TO_TERABYTE 0.001

void convertBitsToBytes() {
    double bits = readInputValue("Digite o valor em bits: ");
    double bytes = convert(bits, BIT_TO_BYTE);
    printResult(bits, bytes, "bits", "bytes");
}

void convertBytesToKilobytes() {
    double bytes = readInputValue("Digite o valor em bytes: ");
    double kilobytes = convert(bytes, BYTE_TO_KILOBYTE);
    printResult(bytes, kilobytes, "bytes", "kilobytes");
}

void convertKilobytesToMegabytes() {
    double kilobytes = readInputValue("Digite o valor em kilobytes: ");
    double megabytes = convert(kilobytes, KILOBYTE_TO_MEGABYTE);
    printResult(kilobytes, megabytes, "kilobytes", "megabytes");
}

void convertMegabytesToGigabytes() {
    double megabytes = readInputValue("Digite o valor em megabytes: ");
    double gigabytes = convert(megabytes, MEGABYTE_TO_GIGABYTE);
    printResult(megabytes, gigabytes, "megabytes", "gigabytes");
}

void convertGigabytesToTerabytes() {
    double gigabytes = readInputValue("Digite o valor em gigabytes: ");
    double terabytes = convert(gigabytes, GIGABYTE_TO_TERABYTE);
    printResult(gigabytes, terabytes, "gigabytes", "terabytes");
}

void showStorageConversionMenu() {
    int choice;

    do {
        printf("\n--- Conversor de Unidade de Armazenamento ---\n");
        printf("1. Converter bits para bytes\n");
        printf("2. Converter bytes para kilobytes\n");
        printf("3. Converter kilobytes para megabytes\n");
        printf("4. Converter megabytes para gigabytes\n");
        printf("5. Converter gigabytes para terabytes\n");
        printf("6. Sair\n");
        printf("Escolha uma opção: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                convertBitsToBytes();
                break;
            case 2:
                convertBytesToKilobytes();
                break;
            case 3:
                convertKilobytesToMegabytes();
                break;
            case 4:
                convertMegabytesToGigabytes();
                break;
            case 5:
                convertGigabytesToTerabytes();
                break;
            case 6:
                printf("Saindo...\n");
                break;
            default:
                printf("Opção inválida! Tente novamente.\n");
        }
    } while (choice != 6);
}

