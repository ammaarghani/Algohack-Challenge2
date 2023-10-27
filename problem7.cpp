#include <iostream>

int main() {
    int num1, num2, num3;
    printf("Enter the first intger: ");
    scanf("%d", &num1);
    printf("Enter the second intger: ");
    scanf("%d", &num2);
    printf("Enter the third intger: ");
    scanf("%d", &num3);
    int largest = (num1 > num2) ? ((num1 > num3) ? num1 : num3) : ((num2 > num3) ? num2 : num3);
    printf("Largest is: %d\n", largest);
    return 0;
}
