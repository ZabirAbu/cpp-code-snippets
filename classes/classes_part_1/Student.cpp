#include "Student.h"

#include <iostream>

using namespace std;

// Actions - Constructor
Student::Student()
{
    m_name = "no name";
    cout << "Constructor:" << endl;
    cout << "m_name is: " << m_name << endl;
}

Student::Student(string name)
{
    m_name = name;
    cout << "Constructor:" << endl;
    cout << "m_name is: " << m_name << endl;
}

// Action - Destructor
Student::~Student()
{
    cout << "Destructor:" << m_name << endl;
}


void Student::printName()
{
    cout << "name is: " << m_name << endl;
}