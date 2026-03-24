#include <iostream>
using namespace std;
class Person {
public:
    string name;
    int age;
    void getPersonData() {
        cout << "Enter name: ";
        cin >> name;
        cout << "Enter age: ";
        cin >> age;
    }

    void showPersonData() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};
class Student : public Person {
public:
    float marks;
    void getStudentData() {
        cout << "Enter marks: ";
        cin >> marks;
    }
    void showStudentData() {
        showPersonData(); 
        cout << "Marks: " << marks << endl;
    }
};
class Teacher : public Person {
public:
    string subject;

    void getTeacherData() {
        cout << "Enter subject: ";
        cin >> subject;
    }
    void showTeacherData() {
        showPersonData();  
        cout << "Subject: " << subject << endl;
    }
};

int main() {
    Student s;
    Teacher t;
    
    s.getPersonData();   
    s.getStudentData();
    s.showStudentData();

    t.getPersonData();   
    t.getTeacherData();
    t.showTeacherData();

    return 0;
}
