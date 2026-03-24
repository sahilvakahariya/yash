#include <iostream>
using namespace std;
int main() {
    int arr[9], sum = 0;
    float avg;
    cout << "Enter 9 numbers: ";
    for (int i = 0; i < 5; i++) {
        cin >> arr[i];
        sum = sum + arr[i];
    }
    avg = sum / 9.0;
    cout << "Sum = " << sum << endl;
    cout << "Average = " << avg << endl;
    return 0;
}
