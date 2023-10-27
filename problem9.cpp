#include <iostream>

int main() {
    int mathMarks;
    printf("Enter math marks: ");
    scanf("%d", &mathMarks);
    char grade;
    if (mathMarks >= 75) {
        grade = 'A';
    } else if (mathMarks >= 65) {
        grade = 'B';
    } else if (mathMarks >= 55) {
        grade = 'C';
    } else if (mathMarks >= 35) {
        grade = 'S';
    } else {
        grade = 'W';
    }
    printf("Grade is: %c\n", grade);
    return 0;
}
