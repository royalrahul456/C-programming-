#include <stdio.h>

int main() {
    int num, tens, units, sum;
    printf("Enter a 2-digit integer: ");
    scanf("%d", &num);
    tens = num / 10;
    units = num % 10;
    sum = tens + units;
    printf("Sum of digits = %d\n", sum);
    return 0;
}
