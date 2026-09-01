#include <iostream>
using namespace std;

void swapByValue(int a, int b) {
    int temp = a;
    a = b;
    b = temp;
}

void swapByReference(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

int main() {
    int x = 5, y = 10;

    cout << "Original values: x = " << x << ", y = " << y << "\n\n";

    cout << "Call by Value:\n";
    cout << "Before swapByValue: x = " << x << ", y = " << y << "\n";
    swapByValue(x, y);
    cout << "After swapByValue:  x = " << x << ", y = " << y << "\n\n";

    cout << "Call by Reference:\n";
    cout << "Before swapByReference: x = " << x << ", y = " << y << "\n";
    swapByReference(x, y);
    cout << "After swapByReference:  x = " << x << ", y = " << y << "\n";

    return 0;
}