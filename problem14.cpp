#include <iostream>

int main() {
    int totalMinutes;
    printf("Enter minutes: ");
    scanf("%d", &totalMinutes);
    int hours = totalMinutes / 60;
    int minutes = totalMinutes % 60;
    printf("%d Hours %d Minutes", hours, minutes);
    return 0;
}
