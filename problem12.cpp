#include <iostream>

int main() {
    int num1, num2, num3;
    printf("Enter the first integer: ");
    scanf("%d", &num1);
    printf("Enter the second integer: ");
    scanf("%d", &num2);
    printf("Enter the third integer: ");
    scanf("%d", &num3);

    int result;
    if (num1 == num2 && num2 == num3) {
        result = 30;
    } else if (num1 == num2 || num2 == num3 || num1 == num3) {
        result = 20;
    } else {
        result = 40;
    }
    printf("Result is: %d\n", result);
    return 0;
}
