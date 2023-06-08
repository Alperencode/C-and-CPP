#include <iostream>
using namespace std;

class Silindir{
	
	public:
        Silindir(int Yukseklik, int TabanCapi){
        	yukseklik = Yukseklik;
        	tabanCapi = TabanCapi;
		}
		
		float HacimHesapla(){
			return pi*tabanCapi*(2*yukseklik);
		}

	private:
		int yukseklik, tabanCapi;
        float pi = 3.14;
		
};

int main(){
	
    int yukseklik, tabanCapi;

    cout << "Silindirin yuksekligini girin: ";
    cin >> yukseklik;
    cout << "Silindirin taban capini girin: ";
    cin >> tabanCapi;
	
	Silindir silindir(yukseklik, tabanCapi);
    
    cout << "Silindirin hacmi: " << silindir.HacimHesapla();
    
    return 0;
}
