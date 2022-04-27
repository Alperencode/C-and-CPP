#include <iostream>
using namespace std;

int main(){
	
	int a,b;
	cout << "Sayi girin: \n";
	cin >> a >> b;
	
	
	cout << "Toplam: " << a+b << "\nCikarma: " << a-b << "\nCarpim: " << a*b;
	
	if(b == 0){
		cout << "\nBolum 0 olamaz.";
	}else{
		cout << "\nBolum: " << a/b;
	}
	
}
