#include <iostream>
using namespace std;

int x=42;

int main() {

    {
        int x = 7;
    }
    {
        int x = 42;
    }

    return 0;
}