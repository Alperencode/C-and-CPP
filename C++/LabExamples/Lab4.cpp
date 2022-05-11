#include <conio.h>
#include <fstream>
#include <iostream>

using namespace std;

int main()
{
	char c,dosyaIsmi[50];
	cout << "Isim girin: \n";
	cin >> dosyaIsmi;
	
	ifstream in(dosyaIsmi);
	if(!in){
		cout << "Boyle bir dosya yok";
		getch();
		return 0;
	}
	
	cout << "\n";
	while(in.eof() == 0){
		in.get(c);
		cout << c;
	}
	getch();
	
}
