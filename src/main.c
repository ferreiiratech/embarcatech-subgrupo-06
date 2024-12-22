#include <stdio.h>
#include "main.h"

void showMainMenu() {
    int choice;

    do {
<<<<<<< HEAD
        printf("\n--- Menu Principal ---\n");
        printf("1. Conversor de Volume\n");
        printf("2. Sair\n");
=======
        system("cls");
        printf("\nMenu de Conversão de Unidades:\n");
        printf("1. Conversão de Volume\n");
        printf("2. Conversão de Comprimento\n");
        printf("3. Conversão de Massa\n");
        printf("4. Conversão de unidades de armazenamento de dados\n");
        printf("5. Conversão de Velocidade\n");
        printf("6. Sair\n");
>>>>>>> 39b8879f52ff61797ec7fcd9ffe6ee5e57f0bd88
        printf("Escolha uma opção: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                showVolumeConversionMenu();
                break;
            case 2:
<<<<<<< HEAD
=======
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
>>>>>>> 39b8879f52ff61797ec7fcd9ffe6ee5e57f0bd88
                printf("Saindo do programa...\n");
                break;
            default:
                printf("Opção inválida! Tente novamente.\n");
        }
<<<<<<< HEAD
    } while (choice != 2);
}
=======
    } while (escolha != 6);
>>>>>>> 39b8879f52ff61797ec7fcd9ffe6ee5e57f0bd88

int main() {
    printf("Bem-vindo ao Conversor de Unidades!\n");
    showMainMenu();
    return 0;
}
