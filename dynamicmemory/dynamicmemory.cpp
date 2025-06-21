#include <iostream>
using namespace std;

int main() {

    int numberOfStudents=0;
    cout << "How many students in our class?" << endl;
    cin >> numberOfStudents;

    int* studentids = new int[numberOfStudents];

    for (int i=0; i<numberOfStudents; i++){
        studentids[i] = i;
    }

    delete[] studentids;
    return 0;
}