#include <iostream>
using namespace std;


int main(){
    int x = 42;
    int& ref = x;
    // "int&" is the full type, for a reference type
    ref = 43;
    

    cout << "x value    : " << x << endl;
    cout << "x type     : " << typeid(x).name() << endl;
    cout << "x address  : " << &x << endl;

    cout << "ref value  : " << ref << endl;
    cout << "ref type   : " << typeid(ref).name() << endl;
    cout << "ref address: " << &ref << endl;

    return 0;
}