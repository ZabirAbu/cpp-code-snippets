#include <iostream>
using namespace std;

int main() {
    int ids[100];

    for(int i=0; i<100; i++){
        ids[i]=i;
    }

    for(int i=0; i<100; i++){
        cout << ids[i] << endl;
    }

    return 0;
}