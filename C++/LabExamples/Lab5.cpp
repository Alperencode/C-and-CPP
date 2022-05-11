#include <conio.h>
#include <iostream>

using namespace std;

class Ogrenci{
	private:
		int ogrencino,notlar[3],notsirasi;
	public:
		void ogrencinoekle(int no){
			ogrencino = no;
		}
		void notekle(int no){
			if(notsirasi < 3){
				notlar[notsirasi] = no;
				notsirasi++;
			}
		}
		void notyazdir(){
			cout << "Notlar: \n";
			for(int i=0;i<3;i++){
				cout << notlar[i] << "\n";
			}
		}
};

int main()
{
	
	Ogrenci ogrenci1;
	
	ogrenci1.notekle(76);
	ogrenci1.notekle(75);
	ogrenci1.notekle(24);
	
	ogrenci1.ogrencinoekle(210205058);
	
	ogrenci1.notyazdir();	
}
