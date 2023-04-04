#include <iostream>
#include "klasa_osoba.h"

using namespace std;

int Osoba::sprawdzeniePeselu(string pesel) {
    
    if (pesel.length() !=11)
        return 1;
    for (int i=0; i<11; i++) {
        if (pesel[i] < '0' || pesel[i] > '9')
            return 2;
    }
    return 0;
};

void Osoba::obliczanieWieku(string pesel) {
    this->wiek = 2023 - (1900 + (pesel[0] - '0') * 10 + (pesel[1] - '0'));
};

int Osoba::getWiek() {
    return wiek;
};


string Osoba::getPesel() {
    return pesel;
};

string Osoba::getImie() {
    return imie;
};

string Osoba::getNazwisko() {
    return nazwisko;
};

int Osoba::setPesel(string pesel) {
    int wynik = sprawdzeniePeselu(pesel);
    if (wynik == 0) {
        this->pesel = pesel;
        obliczanieWieku(pesel);
    }
    return wynik; //1 lub 2
};

void Osoba::setImie(string imie) {
    this->imie = imie;
};

void Osoba::setNazwisko(string nazwisko) {
    this->nazwisko = nazwisko;
};