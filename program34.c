#include <stdio.h>

int main() {
    int marks;
    printf("Enter marks (0-100): ");
    scanf("%d", &marks);
    if (marks >= 40) {
        printf("Result: PASSED\n");
    } else {
        printf("Result: FAILED\n");
    }
    return 0;
}
