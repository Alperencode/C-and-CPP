// Basic Class and Object example
#include <iostream>
using namespace std;

class Employee{
    public:
        Employee(string,string,int);
        void Introduce(){
            cout << "Name: " << name << endl 
            << "Company: " << company << endl
            << "Age: " << age << endl;
        }
    private:
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
    emp1.Introduce();

}