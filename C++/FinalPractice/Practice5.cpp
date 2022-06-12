// Inheritance
#include <iostream>

using namespace std;

class Person{
	
	public:
		string name,surname;
		int age;
		void sayName(){
			cout << "\nName: " << name;			
		}
		void sayAge();
	
};

class Man : public Person{
	
	public:
		Man(string,string,int,int);
		void setSalary(int s)	{ salary = s; }
		int getSalary()			{ return salary; }

	private:
		int salary;
		
};

Man::Man(string n, string sur, int a, int s){
	
	name = n;
	surname = sur;
	age = a;
	salary = s;
	
}

void Person::sayAge(){
	
	cout << "\nAge: " << age;
	
}

int main(){
	
	Man person1("Alperen","Aga",19,10000);
	
	person1.sayName();
	
	cout << "\nSalary: " << person1.getSalary();
	
}
