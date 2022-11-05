#include <iostream>
using namespace std;
#define p(x) cout << x << endl;

class Dog{

    int age;
    string name;

    public:
        Dog(){
            age = 3;
            name = "Fluffy";
        }

        // takes the parameter by reference
        // but since its const it cannot be changed in this function
        void setAge(const int& a){
            age = a;

            // error (since a is const)
            // a++;
        }

        // Returning const variable (by reference) 
        // so 'name' cannot be changed by caller
        const string& getName(){
            return name;
        }

        // This functions cannot change any of class member
        // It can only call const functions
        void printName() const{
            cout << "const " + name << endl;
            
            // error
            // cout << getName();

            // this functions will be called when dog is const
        }

        // const functions can be used to overload the functions
        void printName(){
            cout << "not-const " + name << endl;
            // this functions will be called when dog is not const
        }
};

int main(){
	
    Dog dog1;
    const Dog dog2;

    int i = 9;

    dog1.setAge(i);
    p(i);

    const string& name = dog1.getName();
    p(name);

    dog1.printName();
    dog2.printName();
	
    // error (cannot change by caller)
    // name = "A";
}
