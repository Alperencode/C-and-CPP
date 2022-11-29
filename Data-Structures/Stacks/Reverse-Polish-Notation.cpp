// Reverse Polish Natation
#include <iostream>
#include <stack>
#include <string>
#include <cstdio>
using namespace std;

// bool return if char equals any operation symbol (e.g: '+','-')
bool Match(char);

// float return for result of operation
float Operation(stack<float>,char);


int main(){
	
	string text;  // input string
	stack<float> stack;  // float stack
	
	// '#' ends program
	while(text != "#"){
		cout << "Input (# to end): ";
		getline(cin, text);
		
		if(text != "#" && !Match(text[0])){
			// if text doesn't matches any operation then its a number
			float number;
			sscanf(text.c_str(), "%f", &number);  // converting string to float
			
			// pushing float to stack
			stack.push(number);
			
		}else if(Match(text[0])){
			// if text matches any operation symbol
			
			// then do the operation (using function) and add result to stack
			stack.push(Operation(stack,text[0]));
		}
		cout << "Last element: " << stack.top() << "\n\n";
	}
	
	cout << "\nResult: " << stack.top();
}

bool Match(char c){
	// if c matches any operation symbol
	if(c == '+' || c == '-' || c == '/' || c == '*' || c == '%')
		return true;
	return false;
}

float Operation(stack<float> stack, char c){
	int num1,num2;
	
	// gathering last 2 item and deleting them from stack
	num1 = stack.top();
	stack.pop();
	num2 = stack.top();
	stack.pop();

	// return result
	switch(c){
		case '+':
			return num2+num1;
		case '-':
			return num2-num1;
		case '/':
			return num2/num1;
		case '*':
			return num2*num1;
		case '%':
			return num2%num1;
	}
}
