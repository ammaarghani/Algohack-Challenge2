#include <iostream>

#define PI 3.14159265359

int main() {
    double diameter = 10.0;
    int rounds = 10;
    double speed = 1.5;

    double circumference = PI * diameter;
    double totalDistance = rounds * circumference;
    double time = totalDistance / speed;

    printf("%.2lf seconds", time);

    return 0;
}
