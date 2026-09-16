#include <iostream>
using namespace std;
#include <string>

class University {
private:
    string universityName;

public:
   
    University(std::string uName) : universityName(uName) {}

   
    class Department {
    private:
        string departmentName;
        int studentCount;

    public:
       
        Department(string dName, int sCount) 
            : departmentName(dName), studentCount(sCount) {}

       
        void displayDetails(const University& uni) {
            cout << "University Name: " << uni.universityName << endl;
            cout << "Department Name: " << departmentName << endl;
            cout << "Student Count:   " << studentCount << endl;
        }
    };
};

int main() {
   
    University myUni("Stanford University");
    University::Department myDept("Computer Science", 450);
    myDept.displayDetails(myUni);

    return 0;
}