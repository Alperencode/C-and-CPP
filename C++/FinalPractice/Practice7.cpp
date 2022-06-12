#include <iostream>

using namespace std;

class Hayvan{
	
	public:
		int bacakSayisi;
		string isim = "Serhat";
		isminiSoyle();	
	
};


void Hayvan::isminiSoyle(){
	
	cout << "Isim " << isim;
	
}

class Kopek : public Hayvan{
	
	public:
		string cinsi;
	
};

int main(){
	
	Kopek kopek1;
	Hayvan hayvan1;

	kopek1.cinsi;
	
	kopek1.isminiSoyle();
	
}
