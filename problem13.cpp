#include <iostream>

int main() {
    int num1, num2, num3;

    printf("Enter the first integer: ");
    scanf("%d", &num1);

    printf("Enter the second integer: ");
    scanf("%d", &num2);

    printf("Enter the third integer: ");
    scanf("%d", &num3);

    bool result = (num1 >= 20 && num1 < num2 && num1 < num3) ||
                  (num2 >= 20 && num2 < num1 && num2 < num3) ||
                  (num3 >= 20 && num3 < num1 && num3 < num2);

    if (result) {
        printf("True");
    } else {
        printf("False");
    }

    return 0;
}
