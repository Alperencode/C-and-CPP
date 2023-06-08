#include <iostream>
#include <fstream>
using namespace std;

class Araba {
private:
    int kilometre, hiz, sure;
    float depodaki_benzin, yakit_100_km, yaktigi_yakit;

public:
    Araba(int km, float benzin, int h, float yakit_100) {
        kilometre = km;
        depodaki_benzin = benzin;
        hiz = h;
        yakit_100_km = yakit_100;
    }

    int toplamSure(int mesafe) {
        return (mesafe / hiz) * 60;
    }

    float harcananYakit(int mesafe) {
        return (mesafe / 100.0) * yakit_100_km;
    }

    float kalanHesapla(int mesafe){
        return depodaki_benzin - harcananYakit(mesafe);
    }

    void seyahatSonrasi(int mesafe) {
    	sure = toplamSure(mesafe);
    	yaktigi_yakit = harcananYakit(mesafe);
    	kilometre = kilometre + mesafe;
    }
    
    int sonKm(){
    	return kilometre;
	}
};

int main() {
    ifstream dosya("arabalar.txt");
    if (!dosya.is_open()) {
        cout << "Dosya acilamadi!" << endl;
        return 0;
    }

    int km;
    float bnz;
    int hiz;
    float tuketim;

    dosya >> km >> bnz >> hiz >> tuketim;
    Araba araba(km, bnz, hiz, tuketim);

    int mesafe;
    cout << "Gidilecek mesafeyi girin (km): ";
    cin >> mesafe;
    
    araba.seyahatSonrasi(mesafe);
    cout << "Aracin ilk kilometresi = " << km << " km" << endl;
    cout << "Aracin son kilometresi = " << araba.sonKm() << " km" << endl;
    cout << "Depoda ilk benzin = " << bnz << " litre" << endl;
    cout << "Seyahat suresi = " << araba.toplamSure(mesafe) << " dakika" << endl;
    cout << "Harcanan benzin = " << araba.harcananYakit(mesafe) << " litre" << endl;
    cout << "Depoda kalan benzin = " << araba.kalanHesapla(mesafe) << " litre" << endl;

    return 0;
}
