#include <stdio.h>

int main() {
    float m1, m2, m3, m4, m5, total, percentage;
    printf("Enter marks of 5 subjects (out of 100): ");
    scanf("%f %f %f %f %f", &m1, &m2, &m3, &m4, &m5);
    total = m1 + m2 + m3 + m4 + m5;
    percentage = (total / 500.0f) * 100.0f;
    printf("Total Marks = %.2f / 500.00\n", total);
    printf("Percentage = %.2f%%\n", percentage);
    return 0;
}
