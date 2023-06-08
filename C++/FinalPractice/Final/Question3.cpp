#include <iostream>
#include <string>
using namespace std;

class Kahve{
	
	public:
		int boyut, fiyat;
		void boyutAta(int Boyut){
			boyut = Boyut;
		}
		
		int fiyatAta(){
			switch(boyut){
				case 1:
					return 35;
					break;
				case 2:
					return 40;
					break;
				case 3:
					return 45;
					break;
				default:
					return 0;
			}
		}
};

class Latte{
	private:
	    int sut;

	public:
	    void sutAta(int Sut){
	        sut = Sut;
	    }
	    int fiyatHesapla(){
	    	return sut;
		}
};
	

int main(){
	
    Kahve kahve;
    Latte latte;
    
	int boyut;
	string cesit;
	
    cout << "Istediginiz boyutu giriniz: ";
    cin >> boyut;
    cout << "Istediginiz kahve cesidini giriniz(kahve/latte): ";
    cin >> cesit;
    
    kahve.boyutAta(boyut);
    if(cesit.compare("kahve") == 0){
    	kahve.boyutAta(boyut);
    	cout << "Kahvenizin fiyati: " << kahve.fiyatAta() << "TL'dir";
	}else if(cesit.compare("latte") == 0){
		latte.sutAta(15);
    	cout << "Kahvenizin fiyati: " << kahve.fiyatAta() + latte.fiyatHesapla() << "TL'dir";	
	}
	
    return 0;
}
