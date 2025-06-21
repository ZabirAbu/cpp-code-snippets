#include <iostream>
using namespace std;

void SetValue(int arg) {
    // cout << "SetValue:\targ is initially: " << arg << endl;
    // arg = 9999;
    // cout << "SetValue:\targ at end is : " << arg << std::endl;

    cout << "args addr is: " << &arg << endl;
    arg = 9999;
}

int main() {
    int x = 42;
    cout << "x's value is: " << x << endl;
    cout << "x's addr is: " << &x << endl;
    // Call our function
    SetValue(x);
    // Check x's value
    cout << "x's value is: " << x << endl;
    cout << "x's addr is: " << &x << endl;
    return 0;
}