#include <iostream>

int main() {
    int num1, num2;
    printf("Enter the first integer: ");
    scanf("%d", &num1);
    printf("Enter the second integer: ");
    scanf("%d", &num2);
    int largest = (num1 > num2) ? num1 : num2;
    printf("The largest  is: %d\n", largest);
    return 0;
}
