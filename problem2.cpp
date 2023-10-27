#include <iostream>

int main() {
    int num1, num2;
    printf("Enter the first integer: ");
    scanf("%d", &num1);
    printf("Enter the second integer: ");
    scanf("%d", &num2);
    int sum = num1 + num2;
    if (num1 == num2) {
        sum *= 3;
        printf("The integers are the same. Triple the sum: %d\n", sum);
    } else {
        printf("The sum of the integers: %d\n", sum);
    }
    return 0;
}
