// Access Private Members
#include <iostream>

using namespace std;

class Worker{
	
	public:
		// Setter
		void setSalary(int s){
			salary = s;
		}
		
		// Getter
		int getSalary(){
			return salary;
		}
		
	private:
		int salary;
		
};

int main(){
	
	Worker worker1;
	
	worker1.setSalary(120000);
	
	cout << "Salary: " << worker1.getSalary();
}
