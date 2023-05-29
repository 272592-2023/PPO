#include <iostream>
#include "Pracownik.h"

using namespace std;

string Pracownik::getNrKartyPracownika() {
    return nrKartyPracownika;
}

string Pracownik::getStanowisko() {
    return stanowisko;
}

string Pracownik::getType () {
    return "Pracownik";
}

string Pracownik::getId () {
    return getNrKartyPracownika();
}

void Pracownik::setNrKartyPracownika(int nrKartyPracownika) {
    this->nrKartyPracownika = nrKartyPracownika;
}

void Pracownik::setStanowisko(string stanowisko) {
    this->stanowisko = stanowisko;
}

string Pracownik::toStringToPrint() {
    return "PRACOWNIK - Imie: " + getImie() + " Nazwsko: " + getNazwisko() + " Pesel: " + pesel + " Nr karty pracownika: " + getNrKartyPracownika() + " Stanowisko: " + getStanowisko() + " Wiek: " + to_string(getWiek());
}