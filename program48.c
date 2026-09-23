#include <stdio.h>

int main() {
    float radius, height, volume;
    printf("Enter radius of cylinder: ");
    scanf("%f", &radius);
    printf("Enter height of cylinder: ");
    scanf("%f", &height);
    volume = 3.14159f * radius * radius * height;
    printf("Volume of Cylinder = %.2f\n", volume);
    return 0;
}
