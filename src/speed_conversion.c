#include <stdio.h>
#include <stdlib.h>

// DECLARAÇÃO DOS FATORES DE CONVERSÃO DE VELOCIDADE
const float FATOR_MS_PARA_KMH = 3.6;
const float FATOR_MS_PARA_MPH = 2.23694;
const float FATOR_KPH_PARA_MPH = 0.621371;

// 1. FUNÇÃO QUE CONVERTE m/s PARA km/h
void ms_para_kmh(){
    double v_ms, v_kmh;

    printf("\n-> Digite a velocidade em m/s: ");
    scanf("%lf", &v_ms);

    v_kmh = v_ms * FATOR_MS_PARA_KMH;
    printf("\n%.2lf m/s = %.2lf km/h\n", v_ms, v_kmh);
}

// 2. FUNÇÃO QUE CONVERTE m/s PARA mph
void ms_para_mph(){
    double v_ms, v_mph;

    printf("\n-> Digite a velocidade em m/s: ");
    scanf("%lf", &v_ms);

    v_mph = v_ms * FATOR_MS_PARA_MPH;
    printf("\n%.2lf m/s = %.2lf mph\n", v_ms, v_mph);
}

// 3. FUNÇÃO QUE CONVERTE km/h PARA m/s
void kmh_para_ms(){
    double v_kmh, v_ms;

    printf("\n-> Digite a velocidade em km/h: ");
    scanf("%lf", &v_kmh);

    v_ms = v_kmh / FATOR_MS_PARA_KMH;
    printf("\n%.2lf km/h = %.2lf m/s\n", v_kmh, v_ms);
}

// 4. FUNÇÃO QUE CONVERTE km/h PARA mph
void kmh_para_mph(){
    double v_kmh, v_mph;

    printf("\n-> Digite a velocidade em km/h: ");
    scanf("%lf", &v_kmh);

    v_mph = v_kmh * FATOR_KPH_PARA_MPH;
    printf("\n%.2lf km/h = %.2lf mph\n", v_kmh, v_mph);
}

// 5. FUNÇÃO QUE CONVERTE mph PARA m/s
void mph_para_ms(){
    double v_mph, v_ms;

    printf("\n-> Digite a velocidade em mph: ");
    scanf("%lf", &v_mph);

    v_ms = v_mph / FATOR_MS_PARA_MPH;
    printf("\n%.2lf mph = %.2lf m/s\n", v_mph, v_ms);
}

// 6. FUNÇÃO QUE CONVERTE mph PARA km/h
void mph_para_kmh(){
    double v_mph, v_kmh;

    printf("\n-> Digite a velocidade em mph: ");
    scanf("%lf", &v_mph);

    v_kmh = v_mph / FATOR_KPH_PARA_MPH;
    printf("\n%.2lf mph = %.2lf km/h\n", v_mph, v_kmh);
}

// FUNÇÃO QUE EXIBE O MENU DE CONVERSÃO DE VELOCIDADES
void showSpeedConversionMenu(){
    int opcao;

    do{
        system("cls");
        printf("\n--- Conversor de velocidades ---\n");
        printf("1. Converter m/s para km/h\n");
        printf("2. Converter m/s para mph\n");
        printf("3. Converter km/h para m/s\n");
        printf("4. Converter km/h para mph\n");
        printf("5. Converter mph para m/s\n");
        printf("6. Converter mph para km/h\n");
        printf("7. Voltar\n\n");
        printf("-> Escolha uma opção: ");
        scanf("%d", &opcao);

        switch (opcao){
            case 1:
                ms_para_kmh();
                break;
            case 2:
                ms_para_mph();
                break;
            case 3:
                kmh_para_ms();
                break;
            case 4:
                kmh_para_mph();
                break;
            case 5:
                mph_para_ms();
                break;
            case 6:
                mph_para_kmh();
                break;
            case 7:
                printf("Voltando ao menu principal!\n");
                break;
            default:
                printf("Opção inválida!\n Tente novamente!\n");
        }
        system("pause");
    } while (opcao != 7);
}