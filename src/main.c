#include "main.h"
#include <stdio.h>
#include <stdlib.h>

int main() {
    system("chcp 65001 > NUL");

    int escolha;

    do {
        system("cls");
        printf("\nMenu de Conversão de Unidades:\n");
        printf("1. Conversão de Volume\n");
        printf("2. Conversão de Comprimento\n");
        printf("3. Conversão de Massa\n");
        printf("4. Conversão de Armazenamento de dados\n");
        printf("5. Conversão de Velocidade\n");
        printf("6. Conversão de Potência\n");
        printf("7. Sair\n");
        printf("Escolha alguma opção:");
        scanf("%d", &escolha);

        switch (escolha) {
            case 1:
                converterVolume();
                break;
            case 2:
                showSizeConversionMenu();
                break;
            case 3:
                showMassConversionMenuOfMass();
                break;
            case 4:
                showStorageConversionMenu();
                break;
            case 5:
                showSpeedConversionMenu();
            case 6:
                showPotenciaConversionMenu();
                break;
            case 7:
                printf("Saindo do programa...\n");
                break;
            default:
                printf("Opção inválida! Tente novamente.\n");
        }
    } while (escolha != 7);

    return 0;
}
