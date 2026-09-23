#include <stdio.h>

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    if (num > 0) {
        printf("%d is POSITIVE.\n", num);
    } else if (num < 0) {
        printf("%d is NEGATIVE.\n", num);
    } else {
        printf("The number is ZERO.\n");
    }
    return 0;
}
