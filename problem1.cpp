#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double number1, number2;
    cout << "Enter the first number: ";
    cin >> number1;
    cout << "Enter the second number: ";
    cin >> number2;
    double difference = abs(number1 - number2);
    if (difference > 13) {
        double squareRoot = sqrt(difference);
        cout << "Square root of the difference is: " << squareRoot << endl;
    } else {
        double square = difference * difference;
        cout << "Square of the difference is: " << square << endl;
    }
    return 0;
}
