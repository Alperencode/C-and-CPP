#include <iostream>
using namespace std;

class Employee{
    private:
        int salary;
        string company;
    protected:
        string name;
    public:
        Employee(string name, int salary, string company){
            this->name = name; this->salary = salary; this->company = company;
        };
        virtual void Work(){ cout << name << " Working on regular task.." << endl; };

        // const functions to override functions
        void printSalary() const{ cout << salary << " const"; };
        void printSalary() { cout <<  salary; };
};

class Programmer:public Employee{
    private:
        string favLanguage;
    public:
        Programmer(string name, int salary, string company, string favLanguage):Employee(name,salary,company){
            this->favLanguage = favLanguage;
        };
        void Work(){
            cout << name << " is using " << favLanguage << " and working on software project." << endl;
        };
};

class HumanResources:public Employee{
    private:
        string department;
    public:
        HumanResources(string name, int salary, string company, string department):Employee(name,salary,company){
            this->department = department;
        };
        void Work(){
            cout << name << " is looking for " << department << " department employee." << endl;
        };
};

int main(){

    Programmer programmer = Programmer("Alperen", 10000, "Amazon", "C++");
    HumanResources humanResources = HumanResources("Samuel", 80000, "Amazon", "Engineer");

    Employee *e1 = &programmer;
    Employee *e2 = &humanResources;

    e1->Work();
    e2->Work();

    const Programmer programmer2 = Programmer("John", 9500, "Amazon", "Python");
    programmer2.printSalary();
}