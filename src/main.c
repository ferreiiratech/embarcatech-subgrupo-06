#include <stdio.h>
#include "main.h"

void showMainMenu() {
    int choice;

    do {
        printf("\n--- Menu Principal ---\n");
        printf("1. Conversor de Volume\n");
        printf("2. Sair\n");
        printf("Escolha uma opção: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                showVolumeConversionMenu();
                break;
            case 2:
                printf("Saindo do programa...\n");
                break;
            default:
                printf("Opção inválida! Tente novamente.\n");
        }
    } while (choice != 2);
}

int main() {
    printf("Bem-vindo ao Conversor de Unidades!\n");
    showMainMenu();
    return 0;
}
