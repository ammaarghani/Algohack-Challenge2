#include <iostream>

int main() {
    int num1, num2;
    printf("Enter the first integer: ");
    scanf("%d", &num1);
    printf("Enter the second integer: ");
    scanf("%d", &num2);

    bool result = (num1 == 8 || num2 == 8 || num1 + num2 == 8 || abs(num1 - num2) == 8);

    if (result) {
        printf("True");
    } else {
        printf("False");
    }

    return 0;
}
