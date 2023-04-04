#include <iostream>
#include "klasa_pracownik.h"

using namespace std;

int Pracownik::sprawdzeniePeselu(string pesel) {
    
    if (pesel.length() !=11)
        return 1;
    for (int i=0; i<11; i++) {
        if (pesel[i] < '0' || pesel[i] > '9')
            return 2;
    }
    return 0;
};

void Pracownik::obliczanieWieku(string pesel) {
    this->wiek = 2023 - (1900 + (pesel[0] - '0') * 10 + (pesel[1] - '0'));
};

int Pracownik::getWiek() {
    return wiek;
};

int Pracownik::getNrKartyPracownika() {
    return nrKartyPracownika;
}; 

string Pracownik::getPesel() {
    return pesel;
};

string Pracownik::getImie() {
    return imie;
};

string Pracownik::getNazwisko() {
    return nazwisko;
};

string Pracownik::getStanowisko() {
    return stanowisko;
};

void Pracownik::setNrKartyPracownika(int nrKartyPracownika) {
    this->nrKartyPracownika = nrKartyPracownika;
};

int Pracownik::setPesel(string pesel) {
    int wynik = sprawdzeniePeselu(pesel);
    if (wynik == 0) {
        this->pesel = pesel;
        obliczanieWieku(pesel);
    }
    return wynik; //1 lub 2
};

void Pracownik::setImie(string imie) {
    this->imie = imie;
};

void Pracownik::setNazwisko(string nazwisko) {
    this->nazwisko = nazwisko;
};

void Pracownik::setStanowisko(string stanowisko) {
    this->stanowisko = stanowisko;
};