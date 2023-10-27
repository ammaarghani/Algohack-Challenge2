#include <iostream>

int main() {
    int num1, num2;
    printf("Enter the first integer: ");
    scanf("%d", &num1);
    printf("Enter the second integer: ");
    scanf("%d", &num2);
    bool result = (num1 >= 50 && num1 <= 99) || (num2 >= 50 && num2 <= 99);
    if (result) {
        printf("True");
    } else {
        printf("False");
    }
    return 0;
}
