#include <iostream>
int main() {
    int side1, side2;
    printf("Enter the length of first side: ");
    scanf("%d", &side1);
    printf("Enter the length of second side: ");
    scanf("%d", &side2);
    int area = side1 * side2;
    printf("area is: %d", area);

    return 0;
}
