// Conversão de unidade de potência

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

void ConversaoPotencia( char unidadep, float valorp) {
    
    switch(unidadep) {
        case 'w':
            printf("A potência é: %.2fW, %.2fkW, %.2fcv e %.2fhp\n", valorp, valorp/1000, valorp/735.5, valorp/745.7);
            break;

        case 'k':
            printf("A potência é: %.2fkW, %.2fW, %.2fcv, %.2fhp\n", valorp, valorp*1000, valorp*1000 / 735.5, valorp*1000/745.7);
            break;

        case 'c':
            printf("A potência é: %.2fcv, %.2fW, %.2fkW, %.2fhp\n", valorp, valorp* 735.5, valorp* 735.5/1000, valorp*735.5/745.7);
            break;

        case 'h':
            printf("A potência é: %.2fhp, %.2fW, %.2fkW, %.2fcv\n", valorp, valorp*745.7, valorp*745.7/1000, valorp*745.7/735.5);
            break;

        default:
            printf("Unidade inválida. Por favor, insira w, k, c ou h.\n"); 
    }
}

void showPotenciaConversionMenu() {
    char unidadep, continuar;
    float valorp;

    do {
        system("cls");
        printf("Insira a unidade de potência: 'w' para watts, 'k' para kilo watts, 'c' para cavalo vapor, 'h' para Hourse Power\n");
        scanf(" %c", &unidadep);
        
        printf("Insira o valor da potência\n");
        scanf("%f", &valorp);
        
        ConversaoPotencia(unidadep, valorp);
        
        printf("\nDigite 's' caso deseje continuar e 'n' caso deseja encerrar\n");
        scanf(" %c", &continuar); 
    } while (continuar == 's' || continuar == 'S');

    printf("\nVoltando...\n");
    system("pause");
}
