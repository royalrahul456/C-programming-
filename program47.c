#include <stdio.h>

int main() {
    float side, volume, surfaceArea;
    printf("Enter side length of cube: ");
    scanf("%f", &side);
    volume = side * side * side;
    surfaceArea = 6 * side * side;
    printf("Volume of cube = %.2f\n", volume);
    printf("Surface Area of cube = %.2f\n", surfaceArea);
    return 0;
}
