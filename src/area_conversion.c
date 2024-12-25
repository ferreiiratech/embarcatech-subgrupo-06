#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

void areaConversao(char unidade, float valor) {
    switch (unidade) {
        case 'm':
            printf("O valor da área é: \n%.3f m^2 \n%.3f cm^2 \n", valor, valor*10000);
            break;
        case 'c':
            printf("O valor da área é: \n%.3f m^2 \n%.3f cm^2\n", valor/10000, valor);
            break;
        default:
            printf("Unidade inválida!");
            break; 
    } 
}

void showAreaConversionMenu() {
    float valor;
    char unidade, continuar;

    do {
        system("cls");
        printf("Qual unidade deseja converter? \nDigite m - para converter de metros quadrados para centímetros quadrados \ndigite c - para converter de centímetros para metros quadrados\n");
        scanf(" %c", &unidade);

        printf("Digite o valor da unidade de área: ");
        scanf(" %f", &valor);

        areaConversao( unidade, valor);

        printf("\nDigite 's' para continuar ou outra tecla para encerrar.\n");
        scanf(" %c", &continuar); 
    } while (continuar == 's' || continuar == 'S');
    
    printf("\nVoltando...\n");
    system("pause");
}