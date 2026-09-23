#include <stdio.h>

int main() {
    float hours;
    printf("Enter time in hours: ");
    scanf("%f", &hours);
    printf("Minutes: %.2f\n", hours * 60);
    printf("Seconds: %.2f\n", hours * 3600);
    return 0;
}
