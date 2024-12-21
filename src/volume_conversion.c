#include <stdio.h>

// Função de conversão de Volume
void converterVolume() {
    int opcao;
    float valor, resultado;

    printf("\nConversão de Unidades de Volume:\n");
    printf("1. Litros para Mililitros\n");
    printf("2. Mililitros para Litros\n");
    printf("3. Litros para Metros Cúbicos\n");
    printf("4. Metros Cúbicos para Litros\n");
    printf("Escolha uma opção: ");
    scanf("%d", &opcao);

    printf("Digite o valor a ser convertido: ");
    scanf("%f", &valor);

    switch (opcao) {
        case 1:
            resultado = valor * 1000;
            printf("%.2f Litros = %.2f Mililitros\n", valor, resultado);
            break;
        case 2:
            resultado = valor / 1000;
            printf("%.2f Mililitros = %.2f Litros\n", valor, resultado);
            break;
        case 3:
            resultado = valor / 1000;
            printf("%.2f Litros = %.2f Metros Cúbicos\n", valor, resultado);
            break;
        case 4:
            resultado = valor * 1000;
            printf("%.2f Metros Cúbicos = %.2f Litros\n", valor, resultado);
            break;
        default:
            printf("Opção inválida!\n");
            break;
    }
}
