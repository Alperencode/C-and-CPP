#include <iostream> 
#include <string.h> 

using namespace std;

typedef struct{
	
	char kisiIsmi[30];
	char telefon[30];

}degerAl;

degerAl degerleriAl(degerAl d){
	char telefon[30];
	char isim[30];
	
	cout << "telefon girin: ";
	cin >> telefon;

	cout << "isim girin: ";
	cin >> isim;
	
	strcpy(d.telefon, telefon);
	strcpy(d.kisiIsmi, isim);
	return d;
}

class kisi
{
	private:
		char kisiismi [20];
		char telefon[20];
	public:
		kisi();
		kisi(char kisiismiata[20],char telefonata[20]);
		void atamayap(char kisiismiata[20],char telefonatat[20]);
		void yazdir(void);
};
 
kisi :: kisi(){
	degerAl d;
	d = degerleriAl(d);
	strcpy(telefon, d.telefon);
	strcpy(kisiismi, d.kisiIsmi);
};

kisi :: kisi(char kisiismiata[20],char telefonata[20]){
	strcpy(telefon, telefonata);
	strcpy(kisiismi, kisiismiata);
};

void kisi::yazdir(void)
{
	cout<<kisiismi<<"-"<<telefon<<"\n";
}


void kisi::atamayap(char kisiismiata[20],char telefonata[20])
{
	strcpy(telefon, telefonata);
	strcpy(kisiismi, kisiismiata);
}



class dersler
{
	private:
		char dersismi [100];
		int derskodu;
		kisi dershocasi;
	public:
		void derskoduata(int yeniderskodu);
		void dersismisata(char yenidersismi[20]);
		void dershocasiata(kisi dershocasiata);
		void yazdir(void);
	   };


void dersler::derskoduata(int yeniderskodu)
{
	derskodu = yeniderskodu;
}

void dersler::dersismisata(char yenidersiismi[])
{
	strcpy(dersismi, yenidersiismi);
}

void dersler::dershocasiata(kisi dershocasiata)
{
	dershocasi = dershocasiata;
}

void dersler::yazdir(void)
{
	cout<<"-"<<dersismi<<"-"<<derskodu<<"\n";
	dershocasi.yazdir();
}


int main(){

kisi *kisi1 = new kisi();
kisi *kisi2 = new kisi("Betul","05347494451");

kisi1->yazdir();
kisi2->yazdir();

}