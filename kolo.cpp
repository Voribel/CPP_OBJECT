#include <iostream>
#include "kolo.h"
#include <math.h>

using namespace std;


    void Kolo::pole_kola() {
        pole=M_PI*(promien*promien);
    };
    void Kolo::obwod_kola() {
        obwod=srednica*M_PI;
    };
    Kolo::Kolo(int p) {
        promien=p;
    }
    Kolo::~Kolo() {
        cout << endl<< " Działa destruktor";
    };
    void Kolo::wczytaj()
    {
        cout << "Podaj promien kola: ";
        cin >> promien;
    }
    void Kolo::wypisz()
    {
        cout << "Kolo o promieniu "<< promien << "ma obwod "<< obwod << "i pole "<< pole;
    };