// Basic class usage
#include <iostream>

using namespace std;

class Person{
	
	public:
		string name,surname;
		int age;
	
	
};

int main(){
	
	Person human1;
	
	human1.name = "Alperen";
	human1.surname = "Aga";
	human1.age = 19;
	
	cout << "Name: " << human1.name;
	
}
