#include <iostream>
#define p(x) cout << x << endl;
using namespace std;

/*
    - Abstraction means displaying only essential information and hiding the details and complexity.
    - Data abstraction refers to providing only essential information about the data to the outside world, 
    hiding the background details or implementation.
*/

class Stack{
public:
    /*  
    This is Abstract class
    means users of this class don't need to know the complexity of following methods
    If anyone inherits from this class, they are required to create these methods 
        - Since its Abstract class, we cannot create instance of this class
        - We can only create pointer of this class*
    */
    virtual void Pop() = 0;
    virtual void Push() = 0;
    virtual void Top() = 0;
};

class IntStack:public Stack{
public:
    /*
    Since this class inherits from Abstract class
    It must have the methods that Abstract class has
    */
    void Pop() { p("Popped from integer stack") };
    void Push() { p("Pushed to integer stack") };
    void Top() { p("Top element from integer stack") };
};

class FloatStack:public Stack{
public:
    /*
    Since this class inherits from Abstract class
    It must have the methods that Abstract class has
    */
    void Pop() { p("Popped from float stack") };
    void Push() { p("Pushed to float stack") };
    void Top() { p("Top element from float stack") };
};

int main(){

    Stack *intStack = new IntStack();
    Stack *floatStack = new FloatStack();

    intStack->Push();
    floatStack->Pop();

    return 0;
}