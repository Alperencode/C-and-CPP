#include <iostream>
#include <string>
using namespace std;

class YerlesimBirimi{
	
	public:
        string Isim;
		void isimAta(){
            string isim;
            cout << "Yerlesim biriminin ismini giriniz: ";
            cin >> isim;
            Isim = isim;
        }
		void nufusAta(){
            int nufus;
            cout << "   Nufusunu giriniz: ";
            cin >> nufus;
            Nufus = nufus;
        }
        void doganAta(){
            int doganSayisi;
            cout << "   Dogum sayisini giriniz: ";
            cin >> doganSayisi;
            DoganSayisi = doganSayisi;
        }
        void olumAta(){
            int olumSayisi;
            cout << "   Olum sayisini giriniz: ";
            cin >> olumSayisi;
            OlumSayisi = olumSayisi;
        }

        double dogumOrani(){
            return (double)DoganSayisi / Nufus;
        }
        double olumOrani(){
            return (double)OlumSayisi / Nufus;
        }
		
	private:
        int Nufus, DoganSayisi, OlumSayisi;
		
};

int main(){
	
	YerlesimBirimi YB;
    string isim;
    int nufus, doganSayisi, olumSayisi;

    for (int i = 0; i < 2; i++){
        YB.isimAta();
        YB.nufusAta();
        YB.doganAta();
        YB.olumAta();

        cout << YB.Isim << " - Dogum orani: " << YB.dogumOrani() << endl;
        cout << YB.Isim << " - Olum orani: " << YB.olumOrani() << endl;

        cout << endl;
    }
    
    return 0;
}
