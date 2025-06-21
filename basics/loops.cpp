#include <iostream>
using namespace std;
#include <array>


int main() {
    int arr[] = {1, 3, 5};
    array<int,3> arr2{1, 3, 5};

    // range-based for loops
    // for (int i=0; i<3; i=i+1) {
    //     cout << arr[i] << endl;
    // }

    

    // for(int i=0; i<arr2.size(); i=i+1) {
    //     cout << arr2[i] << endl;
    // }

    
    for(int element: arr2){
        cout << element << endl;
    }

    // while loop
    int countdown = 3;
    cout << endl;
    while(countdown > 0){
        cout << countdown << endl;
        countdown --;
    }

    // do while loop
    // cout << endl;
    // countdown = 3;
    // do {
    //     cout << countdown << endl;
    //     countdown--;
    // } while(countdown > 0);

    return 0;
}