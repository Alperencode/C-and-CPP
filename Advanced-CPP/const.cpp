#include <iostream>

// const
//     - A compile time constraint that an object can not be modified
//     - Means its immutable

// Advantages:
//     - const means the variable can be put in ROM (usefull in Embedded programming)
//     - Guards againts inadvertent write to the variable
//     - Self documenting

int main() {

	const int i = 10;
	
	// If const is on left of *, data is const
	// If const is on right of *, pointer is const
	
	const int *p1 = &i;  // data is const but pointer is not
	
	// int* const p2;  // pointer is const but data is not
	
	const int* const p3 = &i;  // both pointer and data is const
	
	// so these are the same
	int const *p4;
	const int *p5;
	
	// Casting away the const
	const_cast<int&>(i) = 42;
	
	// Making static to const
	int j;
	static_cast<int&>(j);
	
}

