#include <iostream>

int main() {
    int number;
    printf("Enter a positive integer: ");
    scanf("%d", &number);
    if (number <= 0) {
        printf("Enter a positive integer.\n");
    } else if (number % 3 == 0 || number % 7 == 0) {
        printf("Multiple of 3 or 7.");
    } else {
        printf("Not a multiple of 3 or 7.");
    }
    return 0;
}
