#include <stdio.h>

int main() {
    int num, tens, units, reversed;
    printf("Enter a 2-digit integer: ");
    scanf("%d", &num);
    tens = num / 10;
    units = num % 10;
    reversed = (units * 10) + tens;
    printf("Reversed number = %02d\n", reversed);
    return 0;
}
