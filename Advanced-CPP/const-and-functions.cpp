#include <iostream>
using std::cout, std::endl, std::string;
#define p(x) cout << x << endl;  // defining p(x) macro to print out variables

class Dog{

    int age;
    string name;

    public:
        Dog(){
            age = 3;
            name = "Fluffy";
        }

        // CONST ARGUMENT
        // its call by value method
        // but since it takes variable as const 
        // variable cannot be changed in this function
        void setAge(const int& a){
            age = a;

            // a++;  // error (because `a` is const)
        }

        // CONST RETURN VALUE
        // Returning reference of string variable
        // but since its returning const variable
        // returning value cannot be change by caller
        const string& getName(){
            return name;
        }

        // CONST FUNCTION
        // This functions cannot change or use any of class member (variables and functions)
        // It can only call const functions like itself
        void printName() const{
            cout << "const " + name << endl;
            
            // cout << getName();  // error
        }

        // const functions can be used to overload the functions
        // In this example this function below will be called when dog is not const
        // Function above will be called when dog is const
        void printName(){
            cout << "not-const " + name << endl;
        }
};

int main(){
	
    Dog dog1;  // not const
    const Dog dog2;  // const

    int i = 9;
    dog1.setAge(i);  // takes reference but as const
    p(i);

    const string& name = dog1.getName();  // returning const reference
    p(name);
    // name = "A";  // error (cannot change by caller)

    dog1.printName();  // not const
    dog2.printName();  // const
	
}
