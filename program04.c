#include <stdio.h>

int main() {
    float a, b, product;
    printf("Enter first number: ");
    scanf("%f", &a);
    printf("Enter second number: ");
    scanf("%f", &b);
    product = a * b;
    printf("Product = %.2f\n", product);
    return 0;
}
