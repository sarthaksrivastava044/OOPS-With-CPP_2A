#include <iostream>
#include <string>

using namespace std;

class Student {
private:
    int rollNumber;
    string name;
    float marks;

public:
    void input() {
        cout << "Enter Roll Number: ";
        cin >> rollNumber;
        
        cin.ignore();
        
        cout << "Enter Name: ";
        getline(cin, name);
        
        cout << "Enter Marks: ";
        cin >> marks;
    }

    void display() {
        cout << "\nStudent Details" << endl;
        cout << "Roll Number : " << rollNumber << endl;
        cout << "Name: " << name << endl;
        cout << "Marks: " << marks << endl;
    }
};

int main() {
    Student s;

    s.input();
    s.display();

    return 0;
}