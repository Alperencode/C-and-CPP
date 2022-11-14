#include <iostream>
using namespace std;

class Phone{
    private:
        // accessible for this class only
        float price;
    protected:
        // accessible for derived classes
        string model;
    public:
        // accessible for everyone
        Phone(string model, float price){
            this->model = model;
            this->price = price;
        };
        float getPrice(){ return price; }
        void makeCall(){ cout << model << " made call!" << endl; };

};

// Default inheritance is: Private
class iPhone: public Phone{
    private:
        string faceTimeNick;
    public:
        iPhone(string model,float price, string faceTimeNick):Phone(model, price){
            this->faceTimeNick = faceTimeNick;
        };
        void makeFaceTime(){ cout << model << " made FaceTime call!" << endl; };
        string getFaceTimeNick() { return faceTimeNick; };
};


int main(){

    iPhone iphone1 = iPhone("XS", 499.99, "Alperencode");
    
    iphone1.makeCall();
    iphone1.makeFaceTime();

}