#include <stdio.h>

int main() {
    float basic, da, hra, gross;
    printf("Enter basic salary: ");
    scanf("%f", &basic);
    da = 0.40f * basic;
    hra = 0.20f * basic;
    gross = basic + da + hra;
    printf("Dearness Allowance (DA 40%%) = %.2f\n", da);
    printf("House Rent Allowance (HRA 20%%) = %.2f\n", hra);
    printf("Gross Salary = %.2f\n", gross);
    return 0;
}
