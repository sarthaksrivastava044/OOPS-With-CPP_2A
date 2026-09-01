#include <iostream>
using namespace std;

double area(double side) {
    return side * side;
}

double area(double length, double breadth) {
    return length * breadth;
}

double simpleInterest(double principal, double time, double rate = 5.0) {
    return (principal * rate * time) / 100.0;
}

int main() {
    double s = 4.0;
    double l = 5.0, b = 3.0;
    double p = 1000.0, t = 2.0;

    cout << "Area of Square" << s << area(s) << endl;
    cout << "Area of Rectangle" << l << b  << area(l, b) << "\n\n";

    cout << "Simple Interest" << simpleInterest(p, t) << "\n";
    cout << "Simple Interest" << simpleInterest(p, t, 7.5) << "\n";

    return 0;
}