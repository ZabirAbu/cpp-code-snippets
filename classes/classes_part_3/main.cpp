#include <iostream>
#include <string>
using namespace std;

class Array
{
    public:
    Array()
    {
        cout << "Constructor" << endl;
        data = new int[10];
        for(int i=0; i<10; i++)
        {
            data[i] = i*i;
        }
    }
    ~Array()
    {
        delete[] data;
    }

    // Copy Constructor
    Array(const Array& rhs)
    {
        cout << "Copy Constructor" << endl;
        data = new int[10];
        for(int i=0; i<10; i++)
        {
            data[i] = rhs.data[i];
        }
    }
    // Copy Assignment operator
    // Object is already constructed, we are just
    // making a copy later(e.g. myArray2 = myArray)
    Array& operator=(const Array& rhs)
    {
        cout << "Copy assignment operator" << endl;

        if(&rhs == this)
        {
            return *this;
        }
        delete[] data;
        data = new int[10];
        for(int i=0; i<10; i++)
        {
            data[i] = rhs.data[i];
        }
        return *this;
    }

    void PrintingData()
    {
        for(int i=0; i<10; i++)
        {
            cout << data[i] << endl;
        }
    }

    void SetData(int index, int value)
    {
        data[index] = value;
    }

private:
    int* data;

};

int main()
{
    // Initialiase all of our data up front
    Array myArray;

    myArray.SetData(0, 100000);
    myArray.SetData(1, 77);
    myArray.SetData(2, 999);

    Array myArray2;
    myArray2 = myArray; // Copy - Assignment operator

    myArray.PrintingData();
    myArray2.PrintingData();
    return 0;

}