#include <stdio.h>

int main() {
    float radius, perimeter;
    printf("Enter radius of circle: ");
    scanf("%f", &radius);
    perimeter = 2 * 3.14159f * radius;
    printf("Perimeter (Circumference) = %.2f\n", perimeter);
    return 0;
}
