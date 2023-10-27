#include <iostream>

int main() {
    double num1, num2, num3;
    printf("Enter the first number: ");
    scanf("%lf", &num1);
    printf("Enter the second number: ");
    scanf("%lf", &num2);
    printf("Enter the third number: ");
    scanf("%lf", &num3);
    double average = (num1 + num2 + num3) / 3;
    printf("The average is: %.2lf\n", average);
    return 0;
}
