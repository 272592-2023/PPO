#include <iostream>
#include "klasa_student.h"

using namespace std;

int Student::sprawdzeniePeselu(string pesel) {
    
    if (pesel.length() !=11)
        return 1;
    for (int i=0; i<11; i++) {
        if (pesel[i] < '0' || pesel[i] > '9')
            return 2;
    }
    return 0;
};

void Student::obliczanieWieku(string pesel) {
    this->wiek = 2023 - (1900 + (pesel[0] - '0') * 10 + (pesel[1] - '0'));
};

int Student::getWiek() {
    return wiek;
};

int Student::getIndeks() {
    return indeks;
}; 

string Student::getPesel() {
    return pesel;
};

string Student::getImie() {
    return imie;
};

string Student::getNazwisko() {
    return nazwisko;
};

void Student::setIndeks(int indeks) {
    this->indeks = indeks;
};

int Student::setPesel(string pesel) {
    int wynik = sprawdzeniePeselu(pesel);
    if (wynik == 0) {
        this->pesel = pesel;
        obliczanieWieku(pesel);
    }
    return wynik; //1 lub 2
};

void Student::setImie(string imie) {
    this->imie = imie;
};

void Student::setNazwisko(string nazwisko) {
    this->nazwisko = nazwisko;
};