#include <iostream>

using namespace std;

class Kolo{
    private:
        int promien,srednica,pole,obwod;
    public:
        Kolo(int=10);
        ~Kolo();
        void wczytaj();
        double pole_kola();
        double obwod_kola();
        void wypisz();
};