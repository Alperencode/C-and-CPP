// Basic class-function usage
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

void Person::sayAge(){
	
	cout << "\nAge: " << age;
	
}

int main(){
	
	Person human1;
	
	human1.name = "Alperen";
	human1.surname = "Aga";
	human1.age = 19;
	
	human1.sayName();
	human1.sayAge();

	
}
