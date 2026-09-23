#include <stdio.h>

int main() {
    int dividend, divisor;
    printf("Enter dividend: ");
    scanf("%d", &dividend);
    printf("Enter divisor: ");
    scanf("%d", &divisor);
    if (divisor != 0) {
        printf("Quotient = %d\n", dividend / divisor);
        printf("Remainder = %d\n", dividend % divisor);
    } else {
        printf("Division by zero is not allowed.\n");
    }
    return 0;
}
