#include <iostream>
#include <vector>
#include "pracownicy.h"

using namespace std;

int WektorPracownikow::dodajPracownika(Pracownik p) {
    try {
        pracownicy.push_back(p);
        return 0;
    } catch (exception e) {
        return 1;
    }
}

Pracownik WektorPracownikow::getPracownik(string pesel) {
    for (int i=0; i<pracownicy.size(); i++) {
        if (pracownicy[i].getPesel() == pesel) {
            return pracownicy[i];
        }
    }
    return Pracownik();
}

Pracownik WektorPracownikow::getPracownik(int nrKartyPracownika) {
    for (int i=0; i<pracownicy.size(); i++) {
        if (pracownicy[i].getNrKartyPracownika() == nrKartyPracownika) {
            return pracownicy[i];
        }
    }
    return Pracownik();
}

int WektorPracownikow::getLiczbaPracownikow() {
    return pracownicy.size();
}

