#include <iostream>
using namespace std;
class student {
public:
    int rollNo;
    void getRoll() {
        cout << "Enter Roll Number: ";
        cin >> rollNo;
    }
    void showRoll() {
        cout << "Roll Number: " << rollNo << endl;
    }
};
class test : public student {
public:
    int m1, m2p;
    void getMarks() {
        cout << "Enter marks of 2 subjects: ";
        cin >> m1 >> m2;
    }

    void showMarks() {
        cout << "Marks 1: " << m1 << endl;
        cout << "Marks 2: " << m2 << endl;
    }
};
class result : public test {
public:
    int total;
    void calculate() {
        total = m1 + m2;
    }

    void display() {
        showRoll();
        showMarks();
        cout << "Total Marks: " << total << endl;
    }
};
int main() {
    result r;
    r.getRoll();
    r.getMarks();
    r.calculate();
    r.display();

    return 0;
}
