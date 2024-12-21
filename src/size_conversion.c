#include <stdio.h>

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
    }while(choice != 7);
}