#include <iostream>
using namespace std;
class person {
	public:
    string name;
    int age;
    void getPerson() {
        cout << "Enter name: ";
        cin >> name;
        cout << "Enter age: ";
        cin >> age;
    }
    void showPerson() {
        cout << "\nName: " << name;
        cout << "\nAge: " << age;
    }
};
class student : public person {
	public:
    float percentage;
    void getStudent() {
        getPerson();
        cout << "Enter percentage: ";
        cin >> percentage;
    }
    void showStudent() {
        showPerson();
        cout << "\nPercentage: " << percentage << endl;
    }
};
class teacher : public person {
public:
    float salary;
    void getTeacher() {
        getPerson();
        cout << "Enter salary: ";
        cin >> salary;
    }
    void showTeacher() {
        showPerson();
        cout << "\nSalary: " << salary << endl;
    }
};
int main() {
    student s;
    teacher t;

    cout << "\n Student Details \n";
    s.getStudent();
    s.showStudent();

    cout << "\n Teacher Details\n";
    t.getTeacher();
    t.showTeacher();

    return 0;
}
