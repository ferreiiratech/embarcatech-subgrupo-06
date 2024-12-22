#include "main.h"
#include <stdio.h>
#include <stdlib.h>

int main() {
    system("chcp 65001 > NUL");

    int escolha;

    do {
        printf("\nMenu de Conversão de Unidades:\n");
        printf("1. Conversão de Volume\n");
        printf("2. Conversão de Comprimento\n");
        printf("3. Conversão de Massa\n");
        printf("4. Conversão de unidades de armazenamento de dados\n")
        printf("5. Sair\n");
        printf("Escolha uma opção: ");
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
                printf("Saindo do programa...\n");
                break;
            default:
                printf("Opção inválida! Tente novamente.\n");
        }
    } while (escolha != 5);

    return 0;
}
