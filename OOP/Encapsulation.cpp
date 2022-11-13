#include <iostream>
using namespace std;
#define p(x) cout << x << endl;

/*
    Encapsulation is a protective barrier that keeps the data 
    and code safe within the class itself
        - We are providing access to those fields via public methods
        - Getters and Setters
*/

class Employee{
    public:
        Employee(string,string,int);

        // getter and setter for name
        const string& getName() { return name; }
        void setName(string name) { this->name = name; }

        // getter and setter for company
        const string& getCompany() { return company; }
        void setCompany(string company) { this->company = company; }
        
        // getter and setter for age
        int getAge() { return age; }
        void setAge(int age) { this->age = age; }

    private:
        // these variables are private and they cannot be directly access
        string name,company;
        int age;
};

Employee::Employee(string name, string company, int age){
    this->name = name;
    this->company = company;
    this->age = age;
}

int main(){

    Employee emp1 = Employee("Alperen","Amazon",19);
    
    const string& name = emp1.getName();
    p(name);

}