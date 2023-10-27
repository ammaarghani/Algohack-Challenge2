#include <iostream>

int main() {
    int num1, num2;
    printf("Enter the first integer: ");
    scanf("%d", &num1);
    printf("Enter the second integer: ");
    scanf("%d", &num2);
    bool result = ((num1 > 0 && num2 < 0) || (num1 < 0 && num2 > 0));
    if (result) {
        printf("One is positive, The other is negative.");
    } else {
        printf("Do not have opposite signs.");
    }

    return 0;
}
