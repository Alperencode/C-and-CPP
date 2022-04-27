#include <iostream>
using namespace std;

int main(){
	
	int a,b,sonuc;
	cout << "Sayi girin: \n";
	cin >> a >> b;

	if(a < b){
		a++;
		b++;
	}else if(a==b){
		sonuc = a*b;
	}
	
	cout << "\nA: " << a << "\nB: " << b << "\nSonuc: " << sonuc;
}
