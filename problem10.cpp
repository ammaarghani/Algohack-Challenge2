#include <iostream>

int main() {
    int num1, num2;
    printf("Enter the first integer: ");
    scanf("%d", &num1);

    printf("Enter the second integer: ");
    scanf("%d", &num2);

    int sum = num1 + num2;
    int result;
    if (sum >= 50 && sum <= 80) {
        result = 65;
    } else {
        result = 80;
    }
    printf("The result is: ");
    printf("%d\n", result);

    return 0;
}
