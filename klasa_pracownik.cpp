#include <iostream>
#include "klasa_pracownik.h"

using namespace std;

int Pracownik::getNrKartyPracownika() {
    return nrKartyPracownika;
}; 

string Pracownik::getStanowisko() {
    return stanowisko;
};

void Pracownik::setNrKartyPracownika(int nrKartyPracownika) {
    this->nrKartyPracownika = nrKartyPracownika;
};

void Pracownik::setStanowisko(string stanowisko) {
    this->stanowisko = stanowisko;
};

string getType () {
    return "Pracownik";
}

string getId () {
    return getNrKartyPracownika();
}