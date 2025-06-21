#include <iostream>
using namespace std;

int main(){
    int x = 7;
    int* px = &x;
    int* px2 = &x;

    //update the value of x
    x = 9;
    
    cout << "x stores        : " << x << endl;
    cout << "x addr          : " << &x << endl;
    cout << "px stores       : " << px << endl;
    cout << "px dereferenced : " << *px << endl;
    cout << "px2 stores      : " << px2 << endl;
    cout << "px2 dereferenced: " << *px2 << endl;

    return 0;
}