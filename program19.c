#include <stdio.h>

int main() {
    int asciiValue;
    printf("Enter an ASCII value (0 - 127): ");
    scanf("%d", &asciiValue);
    printf("Character for ASCII %d = '%c'\n", asciiValue, (char)asciiValue);
    return 0;
}
