#include <iostream>
using namespace std;
int main() {
    int a = 10;
    float b = 5.5;
    float result1;
    result1 = a + b;  
    cout << "Implicit Conversion:" << endl;
    cout << "a + b = " << result1 << endl;
    float x = 9.8;
    int result2;
    result2 = (int)x;  
    cout << "\nExplicit Conversion:" << endl;
    cout << "x = " << x << endl;
    cout << "After conversion (int)x = " << result2 << endl;
    return 0;
}
