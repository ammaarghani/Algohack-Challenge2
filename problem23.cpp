#include <iostream>
int main() {
    int side1 = 60, side2 = 30, side3 = 40;
    int speed = 1;

    int perimeter = side1 + side2 + side3;
    int time = perimeter / speed;

    printf(" %d seconds", time);

    return 0;
}
