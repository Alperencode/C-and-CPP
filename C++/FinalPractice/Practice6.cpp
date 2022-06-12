#include <iostream>
#include <fstream>
using namespace std;

int main() {

  	// Create and open a text file
  	ofstream dosyam("filename.txt");

  	// Write to the file
  	char c;
	cout << "Enter the char: ";
  
	do{
		
		dosyam << c;
		
	}while((c = getchar()) != '#');
	
	// Close the file
	dosyam.close();

}
