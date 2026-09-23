#include <stdio.h>

int main() {
    char ch;
    printf("Enter an alphabet character: ");
    scanf(" %c", &ch);
    if (ch >= 'A' && ch <= 'Z') {
        printf("'%c' is UPPERCASE.\n", ch);
    } else if (ch >= 'a' && ch <= 'z') {
        printf("'%c' is LOWERCASE.\n", ch);
    } else {
        printf("'%c' is not an alphabet letter.\n", ch);
    }
    return 0;
}
