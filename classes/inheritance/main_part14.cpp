#include <iostream>
using namespace std;

class Base{
    public:
        Base(){
            cout << "Base Constructor" << endl;
        }
        ~Base(){
            cout << "Base Destructor" << endl;
        }

    public: 
        int m_base_public_member_variable;
    protected:
        int m_base_protected_member_variable;
    private:
        int m_base_private_member_variable;
};

// class Derived: public Base{
//     public:
//         Derived(){
//             cout << "Derived Constructor" << endl;

//              m_base_public_member_variable = 123;
//              m_base_protected_member_variable = 777;
//             //  m_base_private_member_variable = 444;  ERROR
//         }
//         ~Derived(){
//             cout << "Derived Destructor" << endl;
//         }
// };

// int main(){

//     Derived d;
//     d.m_base_public_member_variable = 123;
//     // d.m_base_protected_member_variable = 777777; ERROR
//     // d.m_base_private_member_variable = 124124; ERROR

//     return 0;
// }


class Derived : protected Base{
    public:
        Derived(){
            cout << "Derived Constructor" << endl;
             // m_base_public_member_variable is really 'protected'
             // now, since we did Derived : protected Base
             m_base_public_member_variable = 123;
             m_base_protected_member_variable = 777;
            //  m_base_private_member_variable = 444;  ERROR
        }
        ~Derived(){
            cout << "Derived Destructor" << endl;
        }
};

int main(){

    Derived d;
    // d.m_base_public_member_variable = 123;  ERROR
    

    return 0;
}