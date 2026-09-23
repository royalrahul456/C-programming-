#include <stdio.h>

int main() {
    int a1, a2, a3;
    printf("Enter 3 angles of triangle: ");
    scanf("%d %d %d", &a1, &a2, &a3);
    if (a1 > 0 && a2 > 0 && a3 > 0 && (a1 + a2 + a3 == 180)) {
        printf("The triangle is VALID.\n");
    } else {
        printf("The triangle is NOT VALID.\n");
    }
    return 0;
}
