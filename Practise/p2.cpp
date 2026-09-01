#include <iostream>
using namespace std;
#include <string>

class Employee {
private:
    int employeeID;
    std::string name;
    double salary;

public:
    void input();
    void display();
};

void Employee::input() {
    cout << "Enter Employee ID: ";
    cin >> employeeID;
    cin.ignore();
    cout << "Enter Name: ";
    getline(std::cin, name);
    cout << "Enter Salary: ";
    cin >> salary;
}

void Employee::display() {
   cout << "\nEmployee ID: " << employeeID << std::endl;
   cout << "Name: " << name << std::endl;
   cout << "Salary: " << salary << std::endl;
}

int main() {
    Employee emp;
    emp.input();
    emp.display();
    return 0;
}