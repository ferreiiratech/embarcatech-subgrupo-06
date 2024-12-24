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
        break; } }

        int main() {
            float valor;
            char unidade, continuar;

            setlocale(LC_ALL, "portuguese");

            do {
                printf("Qual unidade deseja converter? \nDigite m - para converter de metros quadrados para centímetros quadrados \ndigite c para converter de centimetros para metros quadrados\n");
                scanf(" %c", &unidade);

                printf("Digite o valor da unidade de área: ");
                scanf(" %f", &valor);

                areaConversao( unidade, valor);

                printf("\nDigite 's' para continuar ou outra tecla para encerrar.\n");
                scanf(" %c", &continuar); }

                while (continuar == 's' || continuar == 'S');
                printf("Voltando...\n");

                system("pause");
                return 0; }