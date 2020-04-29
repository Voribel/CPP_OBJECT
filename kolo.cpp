#include <iostream>
#include "kolo.h"
#include <math.h>
#include <iomanip>

using namespace std;


    double Kolo::pole_kola() {
        pole=M_PI*(promien*promien);
        return pole;
    };
    double Kolo::obwod_kola() {
        srednica=promien*2;
        obwod=srednica*M_PI;
        return obwod;
    };
    Kolo::Kolo(int p) {
        promien=p;
    }
    Kolo::~Kolo() {
        cout << endl<< " Dziala destruktor";
    };
    void Kolo::wczytaj()
    {
        cout << "Podaj promien kola: ";
        cin >> promien;
    }
    void Kolo::wypisz()
    {
        obwod=Kolo::obwod_kola();
        pole=Kolo::pole_kola();
        cout << fixed << showpoint;
        cout << setprecision(2);
        cout << "Kolo o promieniu "<< promien << " ma obwod "<< obwod << " i pole "<< pole;
    };
