#include <iostream>
using namespace std;

// Address of operator '&'

void foo(){
    // x=72;
}

int main() {
    int x=42;
    float y=72;
    char a='a';
    signed char b = 'b';
    unsigned char c = 'c';

    cout << "x: " << &x << endl;
    cout << "x's size: " << sizeof(x) << endl;
    cout << "y: " << &y << endl;
    // in cpp &a is interpreted as a string thus 
    // have to cast it to a diff type

    cout << "a: " << (void*)&a << endl;
    cout << "b: " << (void*)&b << endl;
    cout << "c: " << (void*)&c << endl;

    cout << "foo: " << (void*)&foo << endl;
    cout << "main: " << (void*)&main << endl;

    return 0;
}