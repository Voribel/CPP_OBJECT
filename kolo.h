#include <iostream>

using namespace std;

class Kolo{
    private:
        double promien,srednica,pole,obwod;
    public:
        Kolo(int=10);
        Kolo(const Kolo&);
        ~Kolo();
        void wczytaj();
        double pole_kola();
        double obwod_kola();
        void wypisz();
};