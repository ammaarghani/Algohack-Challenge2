#include <iostream>
int main() {
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);
    if (number >= 0 && number <= 100) {
        printf("Within the range");
    } else {
        printf("Outside the range.");
    }

    return 0;
}
