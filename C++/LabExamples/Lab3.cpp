#include <iostream>
#include <fstream>
#include <string.h>

using namespace std;

int main(void)
{
	char dosyaIsmi[50];
	cout << "Isim girin: \n";
	cin >> dosyaIsmi;
	
	if(strlen(dosyaIsmi) < 3){
		cout << "Dosya ismi 3'den buyuk olmali";
		return 0;
	}
	
	ofstream outfile;
	outfile.open(dosyaIsmi);
	
	char giris;
	cout << "Dosyaya karakter girin: ";
	while((giris = getchar()) != '#'){
		
		outfile << giris;
		
	}
	
	outfile.close();

	return 0;
}
