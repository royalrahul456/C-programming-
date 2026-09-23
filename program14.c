#include <stdio.h>

int main() {
    float fahrenheit, celsius;
    printf("Enter temperature in Fahrenheit: ");
    scanf("%f", &fahrenheit);
    celsius = (fahrenheit - 32) * 5.0f / 9.0f;
    printf("Temperature in Celsius = %.2f\n", celsius);
    return 0;
}
