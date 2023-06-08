#include <iostream>
using namespace std;

class KolaMakinesi {
private:
    double kolaFiyati;
    int kalanKolaSayisi;

public:
    void ilkYukleme(double fiyat = 2.5, int kolasayisi = 100) {
        kolaFiyati = fiyat;
        kalanKolaSayisi = kolasayisi;
    }

    void kolaVerme() {
        cout << "Kolanin Fiyati: " << kolaFiyati << " lira" << endl;
        cout << "Odemeniz: ";
        double odeme;
        cin >> odeme;

        if (odeme >= kolaFiyati && kalanKolaSayisi > 0) {
            cout << "Kolaniz veriliyor." << endl;
            double paraUstu = odeme - kolaFiyati;
            if (paraUstu > 1)
                cout << "Para ustunuz: " << paraUstu << " lira" << endl;
            else
                cout << "Para ustunuz: " << paraUstu*100 << " kurus" << endl;
            kalanKolaSayisi--;
        } else
            cout << "Yetersiz odeme veya kola yok" << endl;
    }

    void goster() {
        cout << "Son durum:" << endl;
        cout << "Kolanin fiyati: " << kolaFiyati << " lira" << endl;
        cout << "Kalan kola sayisi: " << kalanKolaSayisi << endl;
    }
};

int main() {
    KolaMakinesi makine;

    makine.ilkYukleme();
    makine.kolaVerme();

    cout << endl;
    makine.goster();

    return 0;
}
