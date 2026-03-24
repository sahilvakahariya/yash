#include <iostream>
using namespace std;
int main() {
    int a = 10;
    float b = 5.5;
    char c = 'A';
    const float PI = 3.14;
    float sum = a + b;
    float product = a * b;
    cout << "Integer value (a): " << a << endl;
    cout << "Float value (b): " << b << endl;
    cout << "Character value (c): " << c << endl;
    cout << "Constant PI: " << PI << endl;
    cout << "Sum of a and b: " << sum << endl;
    cout << "Product of a and b: " << product << endl;
    return 0;
}
