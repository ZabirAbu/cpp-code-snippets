#include <iostream>
using namespace std;

int main() {
    int array[] = {1, 3, 5, 7, 9};
    int* px = array;

    cout << array[0] << endl;
    cout << "px is: " << px << endl;

    // Show the array offset
    cout << *(px+0) << endl; //or *(array+0) or array[0]
    cout << *(px+1) << endl;
    cout << *(px+2) << endl;
    cout << *(px+3) << endl;
    cout << *(px+4) << endl;


    return 0;
}
