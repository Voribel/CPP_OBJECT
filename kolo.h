#include <iostream>

using namespace std;

class Kolo{
    private:
        int promien,srednica=promien*2,pole,obwod;
    public:
        Kolo(int=0);
        ~Kolo();
        void wczytaj();
        void pole_kola();
        void obwod_kola();
        void wypisz();
};