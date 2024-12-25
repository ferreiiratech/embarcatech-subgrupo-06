#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// Função para conversão de temperatura
void TemperatureConversion(char unidade, float valor) {
    switch (unidade) {
        case 'c': // Celsius
            printf("A temperatura é: %.2f°C, %.2f°F, %.2fK\n", valor, (valor * 9 / 5) + 32, valor + 273.15);
            break;

        case 'f': // Fahrenheit
            printf("A temperatura é: %.2f°F, %.2f°C, %.2fK\n", valor, (valor - 32) * 5 / 9, ((valor - 32) * 5 / 9) + 273.15);
            break;

        case 'k': // Kelvin
            printf("A temperatura é: %.2fK, %.2f°C, %.2f°F\n", valor, valor - 273.15, ((valor - 273.15) * 9 / 5) + 32);
            break;

        default:
            printf("Unidade inválida. Por favor, insira 'c' (Celsius), 'f' (Fahrenheit) ou 'k' (Kelvin).\n");
    }
}

// Função para exibir o menu de conversão de temperatura
void showTemperatureConversionMenu() {
    char unidade, continuar;
    float valor;

    do {
        system("cls"); // Limpa a tela
        printf("Insira a unidade de temperatura: 'c' para Celsius, 'f' para Fahrenheit, 'k' para Kelvin\n");
        scanf(" %c", &unidade);

        printf("Insira o valor da temperatura\n");
        scanf("%f", &valor);

        TemperatureConversion(unidade, valor);

        printf("\nDigite 's' caso deseje continuar e 'n' caso deseje encerrar\n");
        scanf(" %c", &continuar);
    } while (continuar == 's' || continuar == 'S');

    printf("\nVoltando...\n");
    system("pause");
}