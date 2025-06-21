// #include <iostream>
// using namespace std;

// // 'Forward declared'
// // Function Declaration
// int add(int a, int b);

// float add(float a, float b);

// // Declared and defined
// void print() {
//     cout << "hello functions" << endl;
// }

// int main() {
//     // args are 1 and 2
//     // a = 1 
//     // b = 2
//     // cout << add(1,2) << endl;
//     cout << add(1.2f,2.3f) << endl;

//     print();
//     return 0;
// }

// int add(int a, int b) {
//     cout << "int add(int, int)" << endl;
//     return a+b;
// }


// float add(float a, float b) {
//     cout << "float add(float, float)" << endl;
//     return a+b;
// }

//recursive function
#include <iostream>
using namespace std;

int countdown(int n) {
    // 1. Base case
    if(n==0){
        cout << "0...blast off!" << endl;
        return 0;
    }
    // 2. Recursive case
    cout << n << endl;
    return countdown(n-1);
}

int main() {
    countdown(5);
    return 0;
}