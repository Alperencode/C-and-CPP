#include <iostream>
using namespace std;
#define p(x) cout << x << endl;

/*
    - A virtual function is a member function which is declared within a main class and overridden by a derived class.
    - When you refer to a derived class object using reference to the main class,
    you can call a virtual function for that object and execute the derived class’s version of the function.
        - Mainly used to achieve Runtime *polymorphism*
        - The resolving of function call is done at *runtime*
*/

class MainFrame {
    public:
        virtual void print(){
            p("print MainFrame class");
        };
        void show(){
            p("show MainFrame class");
        };
};

class DerivedClass : public MainFrame {
    public:
        void print(){
            p("print DerivedClass class");
        };
        void show(){
            p("show DerivedClass class");
        };
};

int main(){

	DerivedClass derivedObj;
	MainFrame *mainFramePointer = &derivedObj;

	// Virtual function
	mainFramePointer->print();

	// Non-virtual function
	mainFramePointer->show();
    
    return 0;
}
