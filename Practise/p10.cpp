#include <iostream>
#include <string>

using namespace std;

class Employee {
private:
    int employeeId;
    string name;
    double salary;

public:
    Employee() : employeeId(0), name("N/A"), salary(0.0) {

    }

    Employee(int id, string empName, double empSalary) 
        : employeeId(id), name(empName), salary(empSalary) {
            
        }

    Employee(const Employee& other) {
        employeeId = other.employeeId;
        name = other.name;
        salary = other.salary;
    }

    void display() const {
        cout << "ID: " << employeeId 
             << " | Name: " << name 
             << " | Salary: $" << salary << endl;
    }

    void updateSalary(double newSalary) {
        salary = newSalary;
    }
};

int main() {
    const Employee emp1(101, "Alice Smith", 75000.0);

    emp1.display();

   

    Employee emp2 = emp1; 
    emp2.display();

    return 0;
}