#include <iostream>
int main() {
    int base, height;
    printf("Enter the base length of the triangle: ");
    scanf("%d", &base);
    printf("Enter the height of the triangle: ");
    scanf("%d", &height);
    double area = 0.5 * base * height;
    printf("Area is: %.2lf\n", area);
    return 0;
}
