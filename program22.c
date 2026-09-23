#include <stdio.h>

int main() {
    float km;
    printf("Enter distance in kilometers: ");
    scanf("%f", &km);
    printf("Meters: %.2f m\n", km * 1000.0f);
    printf("Centimeters: %.2f cm\n", km * 100000.0f);
    return 0;
}
