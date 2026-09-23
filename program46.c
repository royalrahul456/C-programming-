#include <stdio.h>

int main() {
    float principal, rate, time, amount;
    printf("Enter Principal: ");
    scanf("%f", &principal);
    printf("Enter Rate of Interest (%%): ");
    scanf("%f", &rate);
    printf("Enter Time in years: ");
    scanf("%f", &time);
    amount = principal;
    for (int i = 0; i < (int)time; i++) {
        amount = amount * (1.0f + (rate / 100.0f));
    }
    printf("Total Amount = %.2f\n", amount);
    printf("Compound Interest = %.2f\n", amount - principal);
    return 0;
}
