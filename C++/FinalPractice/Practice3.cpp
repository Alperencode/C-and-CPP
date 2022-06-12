// Class constructers
#include <iostream>

using namespace std;

class Person{
	
	public:
		string name,surname;
		int age;
		void sayName();
		
		Person(string);
		
		Person(){
			name = "Alperen";
			surname = "Aga"; 
			age = 19;
		}
		
};

Person::Person(string n){
	
	name = n;
	cout << "Olusturuldu";
	
}

void Person::sayName(){
	
	cout << "\nName: " << name;
	
}

int main(){
	
	Person human1("Efe");
	Person human2;
	
}
