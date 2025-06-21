#ifndef STUDENT_H_
#define STUDENT_H_

#include <string>
using std::string;

class Student
{
    // Student - Our new user defined type

public:
    // Actions - Constructor
    Student();
    Student(string name);
    // Action - Destructor
    ~Student();
    // Action - Print the student name
    void printName();

private:
    string m_name;
};

#endif
