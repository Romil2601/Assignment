/*Write a program that implements inheritance using a base class Person and derived
classes Student and Teacher. Demonstrate reusability through inheritance.*/
#include <iostream>
using namespace std;

// Base class
class Person {
protected:
    string name;
    int age;

public:
    void setPerson(string n, int a) {
        name = n;
        age = a;
    }

    void showPerson() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

// Derived class Student
class Student : public Person {
private:
    string course;

public:
    void setStudent(string n, int a, string c) {
        setPerson(n, a);  // Reuse base class function
        course = c;
    }

    void showStudent() {
        showPerson();     // Reuse base class function
        cout << "Course: " << course << endl;
    }
};

// Derived class Teacher
class Teacher : public Person {
private:
    string subject;

public:
    void setTeacher(string n, int a, string s) {
        setPerson(n, a);  // Reuse base class function
        subject = s;
    }

    void showTeacher() {
        showPerson();     // Reuse base class function
        cout << "Subject: " << subject << endl;
    }
};

// Main function
int main() {
    Student s;
    Teacher t;

    s.setStudent("Alice", 20, "BCA");
    t.setTeacher("Mr. Sharma", 45, "Math");

    cout << "Student Information:" << endl;
    s.showStudent();

    cout << "\nTeacher Information:" << endl;
    t.showTeacher();

    return 0;
}