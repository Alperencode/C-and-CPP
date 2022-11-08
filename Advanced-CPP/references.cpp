#include <iostream>
using namespace std;
#define p(x) cout << x << endl;  // macro to print variables

// call by value
void reduce(int a){
    // creates copy of a inside the method
    a--;  // it will not change the value of `a`
    // because its just temporary variable in memory 
}

// call by reference
void increment(int& a){
    // its reference of `a`
    a++;  // so it will increment `a`
}

// also call by reference
void add(int *a){
    // its pointer of `a`
    (*a)++;  // so it will increment `a`
    // we use (*a) so it will increment the value
    // otherwise, it will increment the address
}

int main(){

    int a = 10;

    // reference does not creates another variable in memory
    // unlike pointers, its just reference to `a` value
    int& ref = a;
    p(ref);  // 10

    add(&a);
    p(a);  // 11

    increment(a);
    p(a); // 12

    reduce(a);
    p(a); // still 12, because it's call by value method

    // references cannot be changed
    // so it will just set a to b (a=25), not turning into `b` reference
    int b = 25;
    ref = b;

    cout << "ref: " << ref << endl;
    cout << "a: " << a << endl;

}