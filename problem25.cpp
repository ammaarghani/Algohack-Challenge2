#include <iostream>
int main() {
    using namespace std;
    double son_weight = 0;
    double daughter_weight = 0;
    cout << "Enter the weight of the son in kg: ";
    cin >> son_weight;
    daughter_weight = 2 * son_weight; 
    double sumweights = son_weight + daughter_weight;
    cout << "The sum of their weights is: " << sumweights << " kg" << endl;
    return 0;
}
