#include <stdio.h>

int main() {
    char op;
    double a, b;
    printf("Enter operator (+, -, *, /): ");
    scanf(" %c", &op);
    printf("Enter two operands: ");
    scanf("%lf %lf", &a, &b);
    if (op == '+') {
        printf("Result = %.2lf\n", a + b);
    } else if (op == '-') {
        printf("Result = %.2lf\n", a - b);
    } else if (op == '*') {
        printf("Result = %.2lf\n", a * b);
    } else if (op == '/') {
        if (b != 0) {
            printf("Result = %.2lf\n", a / b);
        } else {
            printf("Error: Division by zero.\n");
        }
    } else {
        printf("Invalid operator.\n");
    }
    return 0;
}
