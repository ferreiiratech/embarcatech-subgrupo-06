#include "shared.h"
#include <stdio.h>

double readInputValue(const char* message) {
    double value;
    printf("\n%s", message);
    scanf("%lf", &value);
    return value;
}

void printResult(double value1, double value2, const char* unit1, const char* unit2) {
    printf("%.2lf %s equivalem a %.2lf %s.\n", value1, unit1, value2, unit2);
}

double convert(double value, double factor) {
    return value * factor;
}