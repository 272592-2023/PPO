#include <iostream>
#include "Osoba.h"

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
}

string Osoba::getImie() {
    return imie;
}

string Osoba::getNazwisko() {
    return nazwisko;
}

string Osoba::getPesel() {
    return pesel;
}

int Osoba::getWiek() {
    return wiek;
}

void Osoba::setImie(string imie) {
    this->imie = imie;
}

void Osoba::setNazwisko(string nazwisko) {
    this->nazwisko = nazwisko;
}

int Osoba::setPesel(string pesel) {
    int wynik = sprawdzeniePeselu(pesel);
    if (wynik == 0) {
        this->pesel = pesel;
        obliczanieWieku(pesel);
    }
    else if (wynik==1) {
        cout << "Pesel musi miec 11 znakow" << endl;
        return wynik;
    }
    relse if (wynik==2) {
        cout << "Pesel musi skladac sie z samych cyfr" << endl;
        return wynik;
    }
}

string Osoba::getType() {
    return typ;
}

string Osoba::getId() {
    return id;
}

string Osoba::toString() {
    return imie + " " + nazwisko + " " + pesel + " " + to_string(wiek);
}

string Osoba::toStringToPrint() {
    return "OSOBA - Imie: " + imie + " Nazwsko: " + nazwisko + " Pesel: " + pesel + " Wiek: " + to_string(wiek);
}
