#include <iostream>
#include <string>

using namespace std;

class ResultAnalyzer;

class StudentResult {
private:
    int rollNo;
    string name;
    double marks[3];
    static int totalStudents;

public:
    StudentResult(int r, string n, double m1, double m2, double m3) {
        rollNo = r;
        name = n;
        marks[0] = m1;
        marks[1] = m2;
        marks[2] = m3;
        totalStudents++;
    }

    ~StudentResult() {
        cout << "Destructor called for " << name << endl;
    }

    static void displayTotalStudents() {
        cout << "Total Students Created: " << totalStudents << endl;
    }

    friend class ResultAnalyzer;
};

int StudentResult::totalStudents = 0;

class ResultAnalyzer {
public:
    void analyzeResult(const StudentResult& s) {
        double total = s.marks[0] + s.marks[1] + s.marks[2];
        double percentage = total / 3.0;

        cout << "Roll No: " << s.rollNo << endl;
        cout << "Name: " << s.name << endl;
        cout << "Total Marks: " << total << "/300" << endl;
        cout << "Percentage: " << percentage << "%" << endl;

        if (s.marks[0] >= 40 && s.marks[1] >= 40 && s.marks[2] >= 40) {
            cout << "Result: Pass" << endl;
        } else {
            cout << "Result: Fail" << endl;
        }
    }
};

int main() {
    StudentResult::displayTotalStudents();

    StudentResult s1(101, "Alice", 85.5, 90.0, 78.0);
    StudentResult s2(102, "Bob", 35.0, 60.0, 72.5);

    StudentResult::displayTotalStudents();

    ResultAnalyzer analyzer;
    cout<<endl;
    cout << "Student 1 Analysis" << endl;
    analyzer.analyzeResult(s1);
    cout<<endl;
    cout << "Student 2 Analysis" << endl;
    analyzer.analyzeResult(s2);

    cout << endl;
    return 0;
}