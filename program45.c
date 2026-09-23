#include <stdio.h>

int main() {
    float units, bill;
    printf("Enter total electricity units consumed: ");
    scanf("%f", &units);
    if (units <= 100) {
        bill = units * 1.50f;
    } else if (units <= 200) {
        bill = (100 * 1.50f) + ((units - 100) * 2.50f);
    } else {
        bill = (100 * 1.50f) + (100 * 2.50f) + ((units - 200) * 3.50f);
    }
    printf("Total Electricity Bill = $%.2f\n", bill);
    return 0;
}
